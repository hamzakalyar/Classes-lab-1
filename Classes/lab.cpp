#include <iostream>
#include <string>
using namespace std;

class Vehicle {
private:
    string make;
    string model;
    int year;
    int mileage;

public:
    Vehicle() {}

    void setMake(string mk) {
        make = mk;
    }

    void setModel(string mdl) {
        model = mdl;
    }

    void setYear(int yr) {
        year = yr;
    }

    void setMileage(int miles) {
        mileage = miles;
    }

    void displayVehicleInfo() {
        cout << "\n\n";
        cout << "Make: " << make << ", Model: " << model << ", Year: " << year << ", Mileage: " << mileage << " miles" << endl;
    }

    void needsServicing(int miles) {
        if (miles >= 10000) {
            cout << "Your car needs servicing.";
        }
        else
            cout << "Your car doesnot need servicing.";
    }
};

int main() {
    Vehicle myVehicle;
    string mk, mdl;
    int yr, miles;
    
    cout << "Enter Make of your vehicle:";
    cin >> mk;
    myVehicle.setMake(mk);

    cout << "Enter Model of your vehicle:";
    cin >> mdl;
    myVehicle.setModel(mdl);

    cout << "Enter Year of your vehicle:";
    cin >> yr;
    myVehicle.setYear(yr);

    cout << "Enter Mileage of your vehicle:";
    cin >> miles;
    myVehicle.setMileage(miles);


    myVehicle.displayVehicleInfo();
    myVehicle.needsServicing(miles);

    return 0;
    system("pause");
}