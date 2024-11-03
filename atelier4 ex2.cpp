#include <iostream>
#include <string>
using namespace std;

class Animal {
protected:
    string name;
    int age;

public:
    // Constructor
    Animal(const string &n, int a) : name(n), age(a) {}

    // Virtual function for displaying information
    virtual void display_info() = 0; // Pure virtual function
};

class Zebra : public Animal {
public:
    Zebra(const string &n, int a) : Animal(n, a) {}

    void display_info() override {
        cout << "Zebra: " << name << endl;
        cout << " Age: " << age << cout <<  " ans." << endl;
        cout << "Origin de Africa." << endl;
    }
};

class Dolphin : public Animal {
public:
    Dolphin(const string &n, int a) : Animal(n, a) {}

    void display_info() override {
        cout << "Dolphin: " << name << endl;
        cout <<  "Age: " << age << "ans." << endl;
        cout << "Origin de Oceans worldwide." << endl;
    }
};

int main() {
    // Création d'une instance de Zebra
    Zebra zebra1("ZEBRA", 10);
    zebra1.display_info();

    // Création d'une instance de Dolphin
    Dolphin dolphin1("DolPHIN", 11);
    dolphin1.display_info();

    return 0;
}