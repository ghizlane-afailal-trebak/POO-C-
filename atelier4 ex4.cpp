#include<iostream>
#include<cmath>
using namespace std ;
class Vecteur3d {
private:
    float x, y, z;
 public:
 // Constructeur avec valeurs par défaut avec liste d'initialisation
    Vecteur3d (float x = 0, float y = 0, float z = 0) : x(x), y(y), z(z) {}
 // Fonction d'affichage les 3 composantes sous forme (x, y, z)
    void afficher() const {
     cout << "(" << x << ", " << y << ", " << z << ")" << endl;
    }
 // Fonction pour obtenir la somme de 2 vecteurs
    Vecteur3d somme(const Vecteur3d &autre) const {
        return Vecteur3d(x + autre.x, y + autre.y, z + autre.z);
    }
// Fonction pour obtenir le produit scalaire de deux vecteurs
    float produitScalaire (const Vecteur3d& autre) const {
        return (x * autre.x) + (y * autre.y) + (z * autre.z);
    }
 // Fonction coinside pour vérifier si deux vecteurs ont les mêmes composantes
    bool coincide(const Vecteur3d&autre) const {
        return (x == autre.x && y == autre.y && z == autre.z);
    }
// Fonction pour obtenir la norme du vecteur
    float norme() const {
        return sqrt(x * x + y * y + z * z);
    }
// Fonction nommée normax permettant d’obtenir, parmi deux vecteurs, celui qui a la plus grande norme.
static Vecteur3d normax(const Vecteur3d autre1, const Vecteur3d autre2) {
    Vecteur3d resultat; // Déclaration d'un vecteur pour stocker le résultat
    if (autre1.norme() > autre2.norme()) {
        resultat =autre1; // Si autre1 vecteur a une norme plus grande, on l'assigne à resultat
    } else {
        resultat = autre2; // Sinon, on assigneautre2 vecteur à resultat
    }
    return resultat; // Retourne le vecteur avec la plus grande norme
}
// Version par adresse
static Vecteur3d* normaxParAdresse(Vecteur3d*autre1, Vecteur3d*autre2) {
    Vecteur3d*resultat; // Déclaration d'un vecteur pour stocker le résultat
    if (autre1->norme() > autre2->norme()) {
        resultat = autre1; // Si autre1 vecteur a une norme plus grande, on l'assigne à resultat
    } else {
        resultat = autre2; // Sinon, on assigneautre2 vecteur à resultat
    }
    return resultat; // Retourne le vecteur avec la plus grande norme
}
   // Version par référence
    static Vecteur3d& normaxReference(Vecteur3d& autre1, Vecteur3d& autre2) {
    if (autre1.norme() > autre2.norme()) {
        return autre1; // Si autre1 vecteur a une norme plus grande, on le return
    } else {
      return autre2; // Sinon, on return l'autre vecteur
    }
}};


int main() {
    // Création de quelques vecteurs
    Vecteur3d v1(1.0, 2.0, 3.0);
    Vecteur3d v2(4.0, 2.0, 3.0);
    // affichage des vecteurs
    cout << "Vecteur 1 c'est : ";
    v1.afficher();
    cout << "Vecteur 2 c'est: ";
    v2.afficher();

    // Somme des vecteurs
    Vecteur3d v3 = v1.somme(v2);
    cout << "la somme de deux vecteurs egale: ";
    v3.afficher();

    // Produit scalaire
    float produit = v1.produitScalaire(v2);
    cout << "Produit scalaire: " << produit << endl;

    // la coïncidence
    bool coincident = v1.coincide(v2);
    cout << "est ce que Les vecteurs coïncident: " << (coincident ? "Oui" : "Non") << endl;

    // Norme des vecteurs
    cout << "Norme du vecteur 1: " << v1.norme() << endl;
    cout << "Norme du vecteur 2: " << v2.norme() << endl;

    // Vecteur qui est la plus grande norme
    Vecteur3d normeMax = Vecteur3d::normax(v1, v2);
    cout << "Vecteur avec la plus grande norme: ";
    normeMax.afficher();

    // Utilisation de la version par adresse
    Vecteur3d* normeMaxAdresse = Vecteur3d::normaxParAdresse(&v1, &v2);
    cout << "Vecteur avec la plus grande norme (valeur par adresse): ";
    normeMaxAdresse->afficher();

    // Utilisation de la version par référence
    Vecteur3d& normeMaxReference = Vecteur3d::normaxReference(v1,v2);
    cout << "Vecteur avec la plus grande norme (valeur par référence): ";
    normeMaxReference.afficher();

    return 0;
}
