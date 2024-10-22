#include <iostream>
#include <string>
class Voiture {
private:
    std::string marque;
    std::string modele;
    int annee;
    float kilometrage;
    float vitesse;

public:
    // Constructeur par défaut
    Voiture() : marque("Inconnue"), modele("Inconnu"), annee(0), kilometrage(0.0), vitesse(0.0) {}

    // Constructeur avec paramètres
    Voiture(std::string m, std::string mod, int a, float km, float v)
        : marque(m), modele(mod), annee(a), kilometrage(km), vitesse(v) {}

    // Méthode pour accélérer
    void accelerer(float valeur) {
        vitesse += valeur ;
    }

    // Méthode pour freiner
    void freiner(float valeur) {
        vitesse -= valeur  ;
        if (vitesse < 0) { // sans que la vitesse ne devienne négative
            vitesse = 0;
        }
    }

	 // Méthode pour afficher les informations
    void afficherInfo() const {
       std::cout << "Marque: " << marque << "\n"
                  << "Modèle: " << modele << "\n"
                  << "Année: " << annee << "\n"
                  << "Kilométrage: " << kilometrage << " km\n"
                  << "Vitesse: " << vitesse << " km/h\n";
    }

    // Méthode pour avancer
    void avancer(float distance) {
        kilometrage += distance;
    }

    // Destructeur Affiche un message indiquant que la voiture est détruite.
    ~Voiture() {
       std:: cout << "La voiture " << marque << " " << modele << " est détruite.\n";
    }
};

int main() {
	 // Création d'une voiture avec le constructeur par défaut
    Voiture voiture2;
    voiture2.afficherInfo();
	std:: cout <<"_________________ \n";
    // Création d'une voiture avec le constructeur avec paramètres
    Voiture voiture1("DACIA", "DUSTER", 2018, 20000.0, 200.0);
    voiture1.afficherInfo();
	std:: cout <<"_________________\n";
    // Accélération
    voiture1.accelerer(50.0);
    voiture1.afficherInfo();
    std:: cout <<"_________________\n";
     // freinage
	voiture1.freiner(20.0);
    voiture1.afficherInfo();
	std:: cout <<"_________________\n";
    // Avancer
   voiture1.avancer(20.0);
    voiture1.afficherInfo();
	std:: cout <<"_________________\n";

    return 0;
}
