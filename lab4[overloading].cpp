#include <iostream>
using namespace std;

class Box {

private:
    double length;      // Length of a box
    double breadth;     // Breadth of a box
    double height;      // Height of a box
public:
    double getVolume(void) {
        return length * breadth * height;
    }
    void setLength(double len) {
        length = len;
    }
    void setBreadth(double bre) {
        breadth = bre;
    }
    void setHeight(double hei) {
        height = hei;
    }

    // Overload + operator to add two Box objects.
    Box operator+(const Box& b) {
        Box box;
        box.length = this->length + b.length;
        box.breadth = this->breadth + b.breadth;
        box.height = this->height + b.height;
        return box;
    }

    // Overload - operator to add two Box objects.
    Box operator-(const Box& b) {
        Box box;
        box.length = this->length - b.length;
        box.breadth = this->breadth - b.breadth;
        box.height = this->height - b.height;
        return box;
    }

    // Overload Postfix++ operator to add two Box objects.
    Box operator++() {
        this->length ++;
        this->breadth ++;
        this->height ++;
        return (*this);
    }

    // Overload ++Prefix operator to add two Box objects.
    Box operator++ (int) {
        this->length++;
        this->breadth++;
        this->height++;
        return *this;
    }

    void display()
    {
        cout << "hight is: " << this->height << endl;
        cout << "breadth is: " << this->breadth << endl;
        cout << "length is: " << this->length << endl;
    }
};
// Main function for the program
int main() {
    Box Box1;                // Declare Box1 of type Box
    Box Box2;                // Declare Box2 of type Box
    Box Box3;                // Declare Box3 of type Box
    double volume = 0.0;     // Store the volume of a box here

    // box 1 specification
    Box1.setLength(6.0);
    Box1.setBreadth(7.0);
    Box1.setHeight(5.0);

    // box 2 specification
    Box2.setLength(12.0);
    Box2.setBreadth(13.0);
    Box2.setHeight(10.0);

    // volume of box 1
    volume = Box1.getVolume();
    cout << "Volume of Box1 : " << volume << endl;

    // volume of box 2
    volume = Box2.getVolume();
    cout << "Volume of Box2 : " << volume << endl;

    // Add two object as follows:
    Box3 = Box1 + Box2;

    // volume of box 3
    volume = Box3.getVolume();
    cout << "Volume of Box3 : " << volume << endl;

    cout << endl;

    //subtracts two objects
    Box3 = Box2 - Box1;
    cout << "subtraction" << endl;
    Box3.display();

    cout << endl;

    //incremt box1++
    Box3= Box1++;
    cout << "incremnt i++" << endl;
    Box3.display();

    cout << endl;

    //incremt ++box2
    Box3=++Box2;
    cout << "incremnt ++i" << endl;
    Box3.display();

    return 0;
}