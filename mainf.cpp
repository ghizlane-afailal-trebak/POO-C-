// main.cpp
#include <iostream>
#include "fichier.h"

int main() {
    
    Fichier* fichier = new Fichier();

    // Création d'une zone mémoire de 26 octets
    fichier->Creation(26);

    // Remplissage de la zone mémoire
    fichier->Remplit();

    // Affichage du contenu de la zone mémoire
    fichier->Affiche();

    // Destruction de l'objet
    delete fichier;

    return 0;
}