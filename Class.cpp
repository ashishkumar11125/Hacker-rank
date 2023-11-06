#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class student {
    private:
        int age;
        string f_name;
        string l_name;
        int std;
        
    public:
    student(){
        cin >> age >> f_name >> l_name >> std;
    }
        
    ~student(){
        cout << age << endl;
        cout << l_name <<", "<< f_name << endl;
        cout << std << endl;
        
        cout << endl << age << ","<< f_name << "," << l_name << "," << std;
    }
    
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    student s;
    return 0;
}
