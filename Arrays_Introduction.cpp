#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n = 0;
    cin >> n;
    int arr[n];
    for (int i = n - 1; i >= 0; i--) {
        cin >> arr[i];
    }
    for (int j = 0; j < n; j++) {
        cout << arr[j] << " " ;
    }
    return 0;
}