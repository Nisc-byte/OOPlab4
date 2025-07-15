#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int id;
public:
    void getData() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter ID: ";
        cin >> id;
        cin.ignore();
    }
    void displayData() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
    }
};

class Payment : public Person {
    int bill;
    int total;
public:
    void getPaymentData() {
        getData();
        cout << "Enter bill no: ";
        cin >> bill;
        cout << "Enter total amount: ";
        cin >> total;
        cin.ignore();
    }

    void displayPatientData() {
        displayData();
        cout << "Bill: " << bill << endl;
        cout << "Total amount: " << total << endl;
    }
};

class Ward : private Person {
    string ward_type;
    int roomNumber;
public:
    void getWardData() {
        getData();
        cout << "Enter room number: ";
        cin >> roomNumber;
        cin.ignore();
        cout << "Enter ward type: ";
        getline(cin, ward_type);
    }

    void displayWardData() {
        displayData();
        cout << "Room number: " << roomNumber << endl;
        cout << "Ward type: " << ward_type << endl;
    }
};

int main() {
    Payment p;
    Ward w;

    p.getPaymentData();
    w.getWardData();

    cout << "\nPatient Details:\n";
    p.displayPatientData();
    w.displayWardData();

    return 0;
}

