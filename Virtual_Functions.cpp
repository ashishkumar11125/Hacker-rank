#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int profCount = 0;
int studentCount = 0;

class Person {
    protected:
    string name;
    int age;
    int id;
    
    public:
    virtual void getdata() {}
    virtual void putdata() {}   
    
};

class Professor : public Person {
    protected:
    int publications;
    
    public:   
    void getdata() {        
        cin >> this -> name;
        cin >> this -> age;
        cin >> this -> publications;
        profCount++;
        this -> id = profCount;
    } 
    
    void putdata() {
        cout << this -> name << " ";
        cout << this -> age << " ";
        cout << this -> publications << " ";
        cout << this -> id << endl;
    }   
    
};

class Student : public Person {
    protected:
    int score;
    
    public:   
    void getdata() {        
        cin >> this -> name;
        cin >> this -> age;
        int a, b, c, d, e, f;
        cin >> a >> b >> c >> d >> e >> f;         
        this -> score = a + b + c + d + e + f;
        studentCount++;
        this -> id = studentCount;
    }
    
    void putdata() {
        cout << this -> name << " ";
        cout << this -> age << " ";
        cout << this -> score << " ";
        cout << this -> id << endl;
    }
        
};
int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}

