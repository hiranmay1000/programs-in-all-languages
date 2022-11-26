#include <bits/stdc++.h>

using namespace std;

// A function is said to be overriding when a function calls in a program with having same name, same return type & same 
// argument lists and it can also have the different data types in different function declaration.

class RBI {
    int money;
    int _insurance;
public:
    int a, b, c;

    int sbi_percentage;
    int axis_percentage;
    int hdfc_percentage;

    void funding() {
        cout << "Amount allotment: ";
        cin >> money;
        cout << "Percentage:\nSbi: \nAxis: \nHDFC:\n";
        cin >> sbi_percentage >> axis_percentage >> hdfc_percentage;

        a = (100 / money) * sbi_percentage;
        b = (100 / money) * axis_percentage;
        c = (100 / money) * hdfc_percentage;

        cout << a << " " << b << " " << c;
    };

    void insurance() {
        cout << "Insurance amount: ";
        cin >> this->_insurance;
    };
};

class SBI: public RBI {
public:
    void getData(){
        funding();
    }
};

class Axis: public RBI {};

class HDFC: public RBI {};

int main() {
    RBI mainBank;
    mainBank.funding();
    mainBank.insurance();

    SBI _sbi;
    Axis _axis;
    HDFC _hdfc;
    return 0;
}