#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Dog {
public:
    string name;
    string breed;
    int age;

    void bark() {
        cout << name << " says Woof!" << endl;
    }
};

class Person {
public:
    string name;
    int age;
    vector<Dog> pet;

    Person() {}

    Person(int total_dogs) {
        pet.resize(total_dogs);
    }

    void introduceMe() {
        cout << "My name is " << name << "." << endl;
        cout << "My age is " << age << "." << endl;
    }

    void details_of_pets() {
        int total_dogs;
        cout << "Enter the total number of dogs: ";
        cin >> total_dogs;

        pet.resize(total_dogs); // Resize the pet vector

        for (int i = 0; i < total_dogs; i++) {
            cout << "Enter details of dog " << i + 1 << ":" << endl;
            cout << "Name:";
            cin >> pet[i].name;
            cout << "Breed:";
            cin >> pet[i].breed;
            cout << "Age:";
            cin >> pet[i].age;
        }
    }

    void introducePets() {
       
        for (int i = 0; i < pet.size(); ++i) {
            cout << name << "'s dog " << i + 1 << " name is: ";
            cout << pet[i].name << " " << endl;
            cout << name << "'s dog " << i + 1 << " breed is: ";
            cout << pet[i].breed << " " << endl;
            cout << name << "'s dog " << i + 1 << " age is: ";
            cout << pet[i].age << " " << endl;
            pet[i].bark();
        }
        cout << endl;
    }
};

class House {
public:
    vector<Person> residents;

    House() {}

    House(int totalPersons) {
        residents.resize(totalPersons);
    }
};

class neighborhood {
public:
    vector<House> houses;

    neighborhood(int total_houses) {
        houses.resize(total_houses);
    }

    void details_of_people() {
        int totalPersons;
        cout << "Enter the total number of persons in the house: ";
        cin >> totalPersons;

        House myHouse(totalPersons); // Create a House object with the specified number of residents

        // Populate the details of each resident
        for (int i = 0; i < totalPersons; ++i) {
            cout << "Enter details for person " << i + 1 << ":" << endl;
            cout << "Name: ";
            cin >> myHouse.residents[i].name;
            cout << "Age: ";
            cin >> myHouse.residents[i].age;
            cout << "Enter details for " << myHouse.residents[i].name << "'s pets:" << endl;
            myHouse.residents[i].details_of_pets();
        }

        cout << "\n\n";
        system("cls");

        // Display the details of each person and their pets
        for (int i = 0; i < totalPersons; ++i) {
            cout << "Details for person " << i + 1 << ":" << endl;
            myHouse.residents[i].introduceMe();
            myHouse.residents[i].introducePets();
            cout << endl;
        }
    }
};

int main() {
    int total_houses;
    cout << "Enter total number of houses in neighborhood:";
    cin >> total_houses;

    neighborhood myNeighborhood(total_houses);

    for (int i = 0; i < total_houses; i++) {
        cout << "Enter details for House " << i + 1 << endl;
        myNeighborhood.details_of_people();
    }

    return 0;
}
