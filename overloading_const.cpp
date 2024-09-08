#include <iostream>
using namespace std;

class Box {
private:
    double width, height, depth;

public:
    // Default constructor
    Box() {
        width = height = depth = 0;

    }

    // Constructor with one parameter
    Box(double side) {
        width = height = depth = side;
        
    }

    // Constructor with three parameters
    Box(double w, double h, double d) {
        width = w;
        height = h;
        depth = d;
        
    }

    void showVolume() {
        cout << "Volume: " << (width * height * depth) << endl;
    }
};

int main() {
    Box box1; // Calls the default constructor
    cout<<"Enter the side of the box: "<<endl;
    int side;
    cin>>side;
    Box box2(side); // Calls the constructor with one parameter
    int wd,ht,dep;
    cout<<"Enter the 3 sides of the box: "<<endl;
    cin>>wd>>ht>>dep;
    Box box3(wd,ht,dep); // Calls the constructor with three parameters

    cout << "Default constructor called!" << endl;
    box1.showVolume();
    cout << "Constructor with one parameter called!" << endl;
    box2.showVolume();
    cout << "Constructor with three parameters called!" << endl;
    box3.showVolume();

    return 0;
}
