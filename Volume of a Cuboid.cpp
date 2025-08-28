// Name: Sameer Yasin  
// PRN: 24070123092  
// Experiment No: 10 

#include <iostream>
using namespace std;

// Class to calculate the volume of a cuboid
class Cuboid {
private:
    double height = 10.0, width = 20.0, length = 45.0; // data members

public:
    // Member function to calculate volume
    double volume() {
        return height * width * length;
    }
};

int main() {
    Cuboid c1;  // Object creation
    double vol = c1.volume();  

    cout << "Volume: " << vol << endl;
    return 0;
}

/*
Output:
Volume: 9000
*/
