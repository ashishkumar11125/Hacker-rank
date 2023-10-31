#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

vector<string> split(string& str, char delim){
    vector<string> splittedLine;
    string currStr = "";
    for(char c: str){
        if(c != delim){
            currStr += c;
        }
        else{
            splittedLine.push_back(currStr);
            currStr = "";
        }
    }
    splittedLine.push_back(currStr);
    
    return splittedLine;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N, Q;
    cin >> N >> Q;
    
    vector<vector<string>> myVec;
    string line;
    for(int i(0); i<=N; ++i){
        getline(cin, line);
        myVec.push_back(split(line, ' '));
    }
    
    map<string, string> myMap;
            
    string curTag = "";
    string lastTag = "";
    string query = "";
    string queryHead = "";        
    string lastS = "";
    for(vector<string> v: myVec){
        int i=0;        
        for(auto s: v){
            if(s[0] == '<' && s[1] != '/'){
                lastTag = curTag;                
                curTag = s.substr(1, s.length());
                
                if(curTag[curTag.length()-1] == '>') curTag = curTag.substr(0, curTag.length()-1);
                if(queryHead != "") queryHead += ".";
                queryHead += curTag;
            }
            
            string closTag = "</" + curTag +">"; 
            if (closTag == s){
                curTag = lastTag;
                int idx = queryHead.find_last_of('.');
                if(idx > 0) queryHead = queryHead.substr(0, idx);
                else queryHead = "";
            }
            bool a = s == "=";
            if (s == "="){
                query = queryHead + "~" + lastS;
                string value = v.at(i+1);
                value = value.substr(1, value.find_last_of('"')-1);
                myMap.insert(pair<string, string>(query, value));
                query = "";
            }
            lastS = s;
            ++i;
        }
        if(queryHead == "") {lastS = "";  query =""; lastTag = ""; curTag =""; i=0;}
        
    }
    for(int i(0); i<Q; ++i){
        getline(cin, line);
        if(myMap.count(line)) cout << myMap[line] << "\n";
        else cout << "Not Found!" << "\n";
    }
    
    return 0;
}