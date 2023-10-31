#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N;
    cin >> N;
    vector<int> v;
    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    
    int Q;
    cin >> Q;
    for (int i = 0; i < Q; i++)
    {
        int q;
        cin >> q;    
        vector<int>::iterator itr;
        itr = lower_bound(v.begin(), v.end(), q);
        int index = distance(v.begin(), itr);
        string message = to_string(index + 1);
        if (v[index] > q)
        {
            message = "No " + message;
        } else {
            message = "Yes " + message;
        }
        cout << message << endl;
    } 
    return 0;
}
