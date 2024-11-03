// Fichier.cpp
#include "fichier.h"
#include<iostream>
using namespace std;
// Constructeur
Fichier::Fichier() {}

// Destructeur
Fichier::~Fichier() {}

// Méthode pour créer la zone mémoire
void Fichier::Creation(size_t taille) {
    corps.resize(taille); // stocker le contenu à la taille qui besion
}

// Méthode pour remplir la zone mémoire
void Fichier::Remplit() {
    for (size_t i = 0; i < corps.size(); ++i) {
        corps[i] = 'A' + (i % 26) ; // Remplissage avec des lettres de A à Z
    }
}

// Méthode pour afficher le contenu de la zone mémoire
void Fichier::Affiche() const {
    cout << "Contenu du fichier  est les lettres de A à Z: " << corps<< endl;
}