#include <iostream>
using namespace std;

class Complexe {
public:
    double reel, imaginaire;

    Complexe(double r = 0, double i = 0) : reel(r), imaginaire(i) {} // constructeur de la classe Complexe pour initialiser les attributs reel et imaginaire de l’objet Complexe avec les valeurs fournies en arguments (r et i)

    Complexe operator + (const Complexe &autre) {
        return Complexe(reel + autre.reel, imaginaire + autre.imaginaire);
    }

    Complexe operator - (const Complexe &autre) {
        return Complexe(reel - autre.reel, imaginaire - autre.imaginaire);
    }

    Complexe operator * (const Complexe &autre) {
        return Complexe(reel * autre.reel - imaginaire * autre.imaginaire, reel * autre.imaginaire + imaginaire * autre.reel);
    }

    Complexe operator / (const Complexe &autre) {
        double denominateur = autre.reel * autre.reel + autre.imaginaire * autre.imaginaire;
        return Complexe((reel * autre.reel + imaginaire * autre.imaginaire) / denominateur, (imaginaire * autre.reel - reel * autre.imaginaire) / denominateur);
    }

    bool operator == (const Complexe &autre) {
        return (reel == autre.reel && imaginaire == autre.imaginaire);
    }
    void afficher() {
        cout << reel << " + " << imaginaire << "i" << endl;
    }
};

Complexe demander_complexe() {
    double reel, imaginaire;
    cout << "Entrez la partie réelle : ";
    cin >> reel;
    cout << "Entrez la partie imaginaire : ";
    cin >> imaginaire;
    return Complexe(reel, imaginaire);
}

void menu() {
    cout << "Choisissez une opération :" << endl;
    cout << "1. Égalité" << endl;
    cout << "2. Addition" << endl;
    cout << "3. Soustraction" << endl;
    cout << "4. Multiplication" << endl;
    cout << "5. Division" << endl;
}

int main() {
    cout << "Premier nombre complexe :" << endl;
    Complexe z1 = demander_complexe();
    cout << "Deuxième nombre complexe :" << endl;
    Complexe z2 = demander_complexe();

    menu();
    int choix;
    cout << "Votre choix : ";
    cin >> choix;

    switch (choix) {
        case 1:
            cout << "Égalité : " << (z1 == z2) << endl;
            break;
        case 2:
            cout << "Addition : ";
            (z1 + z2).afficher();
            break;
        case 3:
            cout << "Soustraction : ";
            (z1 - z2).afficher();
            break;
        case 4:
            cout << "Multiplication : ";
            (z1 * z2).afficher();
            break;
        case 5:
            cout << "Division : ";
            (z1 / z2).afficher();
            break;
        default:
            cout << "Choix invalide" << endl;
    }

    return 0;
}

