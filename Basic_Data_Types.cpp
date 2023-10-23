#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>  // for "fixed" and "setprecision" functions

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
int n; 
long l; 
char b; 
float c; 
double d; 

cin >> n >> l >> b >> c >> d;

cout <<n <<endl;

cout <<l <<endl;

cout <<b <<endl;

cout <<fixed << setprecision(3)<< c <<endl;

cout <<fixed << setprecision(9)<< d <<endl;


return 0;
}
