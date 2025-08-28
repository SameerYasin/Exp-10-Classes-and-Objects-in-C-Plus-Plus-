//Sameer Yasin exp-11
//24070123092
#include<iostream>
#include<string>
using namespace std;

class rec_area {
    public:
    float length, breadth, area;
    void area1();
};

void rec_area::area1() {
    cout << "Enter the length of the rectangle: " << endl;
    cin >> length;
    cout << "Enter the breadth: " << endl;
    cin >> breadth;
    area = length * breadth;
}

int main() {
    rec_area r1;
    r1.area1();
    cout << "\n Area of the rectangle is : " << r1.area << endl;
}

/*
Output:
Enter the length of the rectangle: 
9
Enter the breadth: 
23

 Area of the rectangle is : 207
*/
