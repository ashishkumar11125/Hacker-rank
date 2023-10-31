#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int q, type, mark;
    string name;
    map<string,int> M;
    
    cin >> q;
    for( int i=0; i<q; i++ ) {
        cin >> type >> name;
        switch( type ) {
            case 1 : cin >> mark; M[name] += mark; break;
            case 2 : M.erase( name ); break;
            case 3 : cout << M[name] << endl;
        }
    }    

    return 0;
}
