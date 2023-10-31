#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,a,i,j,pos,start,end;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    cin>>pos>>start>>end;
    v.erase(v.begin()+(pos-1));
    v.erase(v.begin()+start-1,v.begin()+end-1);
    int size=v.size();
    cout<<size<<endl;
    for(auto &e1:v)
    {
        cout<<e1<<" ";
    }


    return 0;
}
