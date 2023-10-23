#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int max_of_four(int a, int b, int c, int d)
{
    // Calculate the maximum of four numbers
    int ans = max(max(max(a, b), c), d);
    return ans;
}

int main()
{
    int a, b, c, d;

    // Input
    cin >> a >> b >> c >> d;

    // Calculate the maximum
    int ans = max_of_four(a, b, c, d);

    // Output
    cout << ans << endl; // Use cout for output

    return 0;
}
