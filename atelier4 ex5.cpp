#include<iostream>
using namespace std;
class Test {
public:
    // Méthode call qui incrémente le compteur d'appels
    void call() {
    static int compteur = 0; // Variable statique pour compter les appels
       compteur ++; // Incrémente le compteur
        cout << "La méthode call a été appelée " << compteur<< " fois." << endl;
    }
};
int main() {
    Test f1, f2;

    // Appels de la méthode call
    f1.call(); // 1er appel
    f2.call(); // 2ème appel
    f1.call(); // 3ème appel
    f2.call(); // 4ème appel
    return 0;
}