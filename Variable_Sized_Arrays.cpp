#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, q, i, j;
    int k;
    cin >> n >> q;
    int ** arr = (int **) calloc(n, sizeof(int *));
    for(int i=0; i<q; i++){
        cin >> k;
        arr[i] = (int*) calloc(k, sizeof(int));
        for(int j=0; j<k; j++){
            cin >> arr[i][j];
        }
    }
    for(int i=0; i<q; i++){
        cin >> n >> k;
        cout << arr[n][k]<<endl;
    }
    for (i = 0; i < n; i++) {
        free(arr[i]);
    }
    free(arr);
    return 0;
}