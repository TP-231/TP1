#include <stdio.h>

// Définition de la structure pour un vecteur 3D
typedef struct {
    float x;
    float y;
    float z;
} Vecteur;

// Fonction pour calculer le produit vectoriel de deux vecteurs
Vecteur produitVectoriel(Vecteur u, Vecteur v) {
    Vecteur w;
    w.x = u.y * v.z - u.z * v.y;
    w.y = u.z * v.x - u.x * v.z;
    w.z = u.x * v.y - u.y * v.x;
    return w;
}
#define LIGNES 2
#define COLONNES 3

void produitVecteurMatrice(int matrice[LIGNES][COLONNES], int vecteur[COLONNES], int resultat[LIGNES]) {
    // Boucle pour chaque ligne de la matrice
    for (int i = 0; i < LIGNES; i++) {
        resultat[i] = 0; // Initialise l'élément du vecteur résultat
        // Boucle pour chaque colonne de la matrice (et chaque élément du vecteur)
        for (int j = 0; j < COLONNES; j++) {
            resultat[i] += matrice[i][j] * vecteur[j];
        }
    }
}

