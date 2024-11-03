// Point.cpp
#include <iostream>
#include "Point.h"
using namespace std;

// Constructeur
Point::Point(float Coordx, float Coordy) : x(Coordx), y(Coordy) {}

// Méthode pour translation du point
void Point::deplace(float deplX, float deplY) {
    x = x + deplX; // Translation sur l'axe x
    y = x + deplY; // Translation sur l'axe y
}

// Méthode pour afficher les coordonnées du point
void Point::affiche() const {
    cout << "Point(" << x << ", " << y << ")" << endl;
}