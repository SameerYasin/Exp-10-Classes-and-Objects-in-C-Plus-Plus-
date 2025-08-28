//Sameer Yasin exp-11
//PRN: 24070123092
#include<iostream>
#include<string>
using namespace std;

class Calculator {
    public:
    float a, b, add, diff, mul, div;

    void input();
    void addition() {
        add = a + b;
    }
    void subtraction() {
        diff = a - b;
    }
    void mult();
    void div1();
};

void Calculator::input() {
    cout << "Enter the first number: " << endl;
    cin >> a;
    cout << "Enter the second number: " << endl;
    cin >> b;
}

void Calculator::mult() {
    mul = a * b;
}

void Calculator::div1() {
    div = a / b;
}

int main() {
    Calculator c1;
    c1.input();
    c1.addition();
    c1.subtraction();
    c1.mult();
    c1.div1();

    cout << "Addition: " << c1.add << endl;
    cout << "Subtraction: " << c1.diff << endl;
    cout << "Multiplication: " << c1.mul << endl;
    cout << "Division: " << c1.div << endl;
}

/*
Output:
Enter the first number: 10
Enter the second number: 5
Addition: 15
Subtraction: 5
Multiplication: 50
Division: 2
*/
