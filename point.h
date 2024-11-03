// Point.h
#include<iostream>

class Point {
private:
    float x; // Coordonnée x
    float y; // Coordonnée y
public:
    // declaration de Constructeur
    Point(float Coordx, float Coordy);

    // Méthode pour translation du point
    void deplace(float deplX, float deplY);

    // Méthode pour afficher les coordonnées du point
    void affiche() const;
};

