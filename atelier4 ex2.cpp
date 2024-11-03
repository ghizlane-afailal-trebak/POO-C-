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
        cout << "Zebra: " << name << ", Age: " << age << " years old." << endl;
        cout << "Origin: Africa." << endl;
    }
};

class Dolphin : public Animal {
public:
    Dolphin(const string &n, int a) : Animal(n, a) {}

    void display_info() override {
        cout << "Dolphin: " << name << ", Age: " << age << " years old." << endl;
        cout << "Origin: Oceans worldwide." << endl;
    }
};

int main() {
    // Création d'une instance de Zebra
    Zebra zebra1("Zara", 5);
    zebra1.display_info();

    // Création d'une instance de Dolphin
    Dolphin dolphin1("Dolly", 8);
    dolphin1.display_info();

    return 0;
}