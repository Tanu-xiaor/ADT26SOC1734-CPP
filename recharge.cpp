#include <iostream>
using namespace std;

class Recharge {
    int no;
    int amount;

public:
    // Constructor
    Recharge() {
        no = 1;
        amount = 199;
    }

    // Display function
    void display() {
        cout << "Recharge No. = " << no << endl;
        cout << "Recharge Amount = " << amount << endl;
    }
};

int main() {
    Recharge obj;

    obj.display();

    return 0;
}