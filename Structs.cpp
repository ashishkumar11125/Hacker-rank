#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Student {
    int age, standardOfStudent;
    string first_name, last_name;
};
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    Student s;
    cin >> s.age  >> s.first_name >> s.last_name >> s.standardOfStudent;
    cout << s.age  <<" "<< s.first_name <<" "<< s.last_name << " "<<s.standardOfStudent;
    return 0;
}
