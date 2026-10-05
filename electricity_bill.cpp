#include <iostream>
using namespace std;

class Electricity {
    int units;
    int rate;

public:
    // Constructor
    Electricity() {
        units = 100;
        rate = 5;
    }

    // Display function
    void display() {
        int bill = units * rate;

        cout << "Units = " << units << endl;
        cout << "Rate = " << rate << endl;
        cout << "Total Bill = " << bill << endl;
    }
};

int main() {
    Electricity obj;

    obj.display();

    return 0;
}