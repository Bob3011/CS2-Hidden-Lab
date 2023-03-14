#include <iostream>
using namespace std;

struct access
{
    string name;
    bool tF;
};

// create a class
class Room {

private:
    double length;
    double breadth;
    double height;
    string name;
    access names[3];
    
public:
    Room() {
        length = 0;
        breadth = 0;
        height = 0;
        name = " ";
    }
    Room(double len, double bread, double heig) {
        length = len;
        breadth = bread;
        height = heig;
    }
    void setlength(int l) {
        length = l;
    }
    int getlength() {
        return length;
    }
    void setbreadth(int b) {
        breadth = b;
    }
    int getheight() {
        return breadth;
    }
    void setheight(int h) {
        height = h;
    }
    int getbreadth() {
        return height;
    }

    double calculateArea() {
        return length * breadth;
    }
    double calculateVolume() {
        return length * breadth * height;
    }
    
    void names_set()
    {
        int i = 0;
        char access_st;
        cout << "please enter a number from 1 to 3 input name and access state:" << endl;
        cin >> i;
        i -= 1;
        cout << "please enter a name\n";
        cin >> names[i].name;

        cout << "pleas enter the  acctess state by typing t or f: " << endl;
        cin >> access_st;

        if (access_st == 't' || access_st == 'T')
        {
            names[i].tF = 1;
        }
        else
        {
            names[i].tF = 0;
        }

    }

    bool names_op()
    {
        int i = 0;
        cout << "please enter a number from 1 to 3 to find out which worker hass access:" << endl;
        cin >> i;
        while (i > 3)
        {
            cout << "please neter a number between 1 and 3" << endl;
            cin >> i;
        }
        i -= 1;
        return names[i].tF;
    }

    void get_names()
    {
        for (int i = 0; i < 3; i++)
        {
            cout << names->name <<  endl;
        }
    }

    void master_set()
    {
        names[0].tF = "t";
        names[1].tF = "f";
        names[2].tF = "f";
    }
    //Create a setter and a getter for ahmed, youssef, and noha with validation.
    // create access function to only allow ahmed into the room.
};

int main() {

    // create object of Room class
    Room room1;

    // assign values to data members
    room1.setlength(42.5);
    room1.setbreadth(30.8);
    room1.setheight(19.2);

    cout << "Area of Room =  " << room1.calculateArea() << endl;
    cout << "Volume of Room =  " << room1.calculateVolume() << endl;

    return 0;
}