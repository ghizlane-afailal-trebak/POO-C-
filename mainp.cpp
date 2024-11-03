// main.cpp
#include <iostream>
#include "Point.h"
using namespace std;

int main() {
    // initialisation d'un point avec des coordonnées x et y
    Point p1(1.0, 2.0);
    
    // Affichage des coordonnées du point
    cout << "Coordonnées initiales : ";
    p1.affiche();
    
    // Translation du point
    p1.deplace(0.5, -1.0);
    
    // Affichage des coordonnées après translation
    cout << "Coordonnées après translation : ";
    p1.affiche();
    
    return 0;
}