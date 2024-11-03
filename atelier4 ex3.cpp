#include <iostream>
#include <string>
using namespace std;

class Personne {
private:
    string nom;
    string prenom;
    string date;

public:
    // Constructeur
    Personne(const string& nom, const string& prenom, const string& date) {
        this->nom = nom;
        this->prenom = prenom;
        this->date = date;
    }

    // Méthode polymorphe pour afficher les données
    virtual void Afficher() const {
        cout << "Nom: " << nom << endl;
        cout << "Prénom: " << prenom << endl;
        cout << "Date de Naissance: " << date << endl;
    }
};

class Employe : public Personne {
private:
    double salaire;

public:
    // Constructeur
    Employe(const string& nom, const string& prenom, const string& date, double salaire)
        : Personne(nom, prenom, date) { // Appel du constructeur de la classe de base Personne
        this->salaire = salaire;
    }

    // Redéfinition de la méthode Afficher
    void Afficher() const override {
        Personne::Afficher(); // Appel de la méthode de la classe de base Personne
        cout << "Salaire: " << salaire << endl;
    }
};

class Chef : public Employe {
private:
    string service;

public:
    // Constructeur
    Chef(const string& nom, const string& prenom, const string& date, double salaire, const string& service)
        : Employe(nom, prenom, date, salaire) { // Appel du constructeur de la classe de base Employe
        this->service = service;
    }

    // Redéfinition de la méthode Afficher
    void Afficher() const override {
        Employe::Afficher(); // Appel de la méthode de la classe de base Employe
        cout << "Service: " << service << endl;
    }
};

class Directeur : public Chef {
private:
    string societe;

public:
    // Constructeur
    Directeur(const string& nom, const string& prenom, const string& date, double salaire, const string& service, const string& societe)
        : Chef(nom, prenom, date, salaire, service) { // Appel du constructeur de la classe de base Chef
        this->societe = societe;
    }

    // Redéfinition de la méthode Afficher
    void Afficher() const override {
        Chef::Afficher(); // Appel de la méthode de la classe de base Chef
        cout << "Société: " << societe << endl;
    }
};

int main() {
    // Création d'objets
    Personne p1("Ghizlane", "Afailal Trebak", "18/09/2004");
    p1.Afficher();
 cout<<"______________________________________"<<endl;
    Employe e1("Mohamed", "Afailal Trebak", "27/10/2008", 10000);
    e1.Afficher();
 cout<<"______________________________________"<<endl;
    Chef c1("Khadija", "Afailal Trebak", "15/03/2000", 9000, "IT");
    c1.Afficher();
 cout<<"______________________________________"<<endl;
    Directeur d1("Abdessamad", "Afailal Trebak", "01/01/1971", 20000, "Comptabilité", "GAT");
    d1.Afficher();
 cout<<"______________________________________"<<endl;
    return 0;
}
