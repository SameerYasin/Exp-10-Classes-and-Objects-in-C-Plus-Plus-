// Name: Sameer Yasin  
// PRN: 24070123092  
// Experiment No: 11  

#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
    string name, branch, subject, year;
    float result;
};

int main(){
    Student s1;
    s1.name = "Zub";
    s1.branch = "ENTC";    
    s1.subject = "C++";
    s1.year = "2nd Year";
    s1.result = 9.5;    

    cout << "Name: " << s1.name << endl;
    cout << "Branch: " << s1.branch << endl;    
    cout << "Subject: " << s1.subject << endl;
    cout << "Year: " << s1.year << endl;
    cout << "Result: " << s1.result << endl;

    s1.name = "Dan";
    s1.branch = "ENTC";    
    s1.subject = "C++";
    s1.year = "2nd Year";
    s1.result = 6.9;    

    cout << "Name: " << s1.name << endl;
    cout << "Branch: " << s1.branch << endl;    
    cout << "Subject: " << s1.subject << endl;
    cout << "Year: " << s1.year << endl;
    cout << "Result: " << s1.result << endl;
}

/*
Output:
Name: Zub
Branch: ENTC
Subject: C++
Year: 2nd Year
Result: 9.5
Name: Dan
Branch: ENTC
Subject: C++
Year: 2nd Year
Result: 6.9
*/
