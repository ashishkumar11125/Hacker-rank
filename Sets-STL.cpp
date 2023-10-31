#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    set<int> set_int;
    int num;
    cin >> num;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    int op_type, op_elem;
    while(num--)
    {
        cin >> op_type >> op_elem;
        switch(op_type)
        {
            case 1:
            set_int.insert(op_elem);
            break;
            case 2:
            set_int.erase(op_elem);
            break;
            case 3:
            cout << (set_int.find(op_elem) == set_int.end() ? "No" : "Yes") << endl;
            break;
        }
        
    } 
    return 0;
}
