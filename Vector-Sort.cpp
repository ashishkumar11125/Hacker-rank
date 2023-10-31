#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int num;
    cin >> num;
    cin.ignore();
    
    vector<int> vec;
    vec.insert(vec.end(), istream_iterator<int>(cin), istream_iterator<int>());
    sort(vec.begin(), vec.end());
    copy(vec.begin(), vec.end(), ostream_iterator<int>(cout, " "));
       
    return 0;
}
