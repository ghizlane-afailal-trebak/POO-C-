#include <iostream>

using namespace std;

int main() {
    // Chaîne de caractères contenant la date et l'heure
    char dateheure[13]; // 12 caractères + 1 pour le caractère nul

    // Demande à l'utilisateur d'entrer la date et l'heure
    cout << "Entrez la date et l'heure sous la forme JJMMAAAAHHNN : ";
    cin >> dateheure;
    
    // On suppose que l'utilisateur entre toujours une chaîne de 12 caractères
    char jour[3];   // JJ
    char mois[3];   // MM
    char annee[5];  // AAAA
    char heure[3];  // HH
    char minute[3]; // NN

    // Remplissage des tableaux de caractères
    for (int i = 0; i < 2; i++) {
        jour[i] = dateheure[i];
    }
    jour[2] = '\0'; // Terminateur de chaîne

    for (int i = 0; i < 2; i++) {
        mois[i] = dateheure[i + 2];
    }
    mois[2] = '\0'; // Terminateur de chaîne

    for (int i = 0; i < 4; i++) {
        annee[i] = dateheure[i + 4];
    }
    annee[4] = '\0'; // Terminateur de chaîne

    for (int i = 0; i < 2; i++) {
        heure[i] = dateheure[i + 8];
    }
    heure[2] = '\0'; // Terminateur de chaîne

    for (int i = 0; i < 2; i++) {
        minute[i] = dateheure[i + 10];
    }
    minute[2] = '\0'; // Terminateur de chaîne

    // Affichage des résultats
    cout << "Date : " << jour << "/" << mois << "/" << annee << endl;
    cout << "Heure : " << heure << ":" << minute << endl;

    return 0;
}