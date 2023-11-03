#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string a;
    string b;
    cin>>a>>b;
     int lena=a.size(),lenb=b.size();
     string c=a+b;
    cout<<lena<<" "<<lenb<<endl;
    cout<<c<<endl;
    int temp;
    temp=a[0];
    a[0]=b[0];
    b[0]=temp;
    cout<<a<<" "<<b<<endl;
    
    return 0;
}