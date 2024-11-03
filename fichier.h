// Fichier.h
#include <iostream>
#include <string>
using namespace std;
class Fichier {
private:
    string corps; // Contenu du fichier
    
public:
    // Constructeur
    Fichier();

    // Destructeur
    ~Fichier();

    // Méthode pour créer la zone mémoire
    void Creation(size_t taille);

    // Méthode pour remplir la zone mémoire
    void Remplit();

    // Méthode pour afficher le contenu de la zone mémoire
    void Affiche() const;
};
