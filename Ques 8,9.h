/*#include <stdio.h>

// Définition de la structure pour un vecteur 3D

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

// ...existing code...*/

void ProduitVect() {
    typedef struct Vecteur{
        float x;
        float y;
        float z;
    } Vecteur;
    Vecteur u, v, w;

    printf("Entrez les composantes du premier vecteur (x y z) : ");
    scanf("%f %f %f", &u.x, &u.y, &u.z);

    printf("Entrez les composantes du second vecteur (x y z) : ");
    scanf("%f %f %f", &v.x, &v.y, &v.z);

    w.x = u.y * v.z - u.z * v.y;
    w.y = u.z * v.x - u.x * v.z;
    w.z = u.x * v.y - u.y * v.x;

    printf("Le produit vectoriel est : (%.2f, %.2f, %.2f)\n", w.x, w.y, w.z);
}
#define LIGNES 2
#define COLONNES 3

void ProduitMatriceVecteur() {
    int matrice[LIGNES][COLONNES];
    int vecteur[COLONNES];
    int resultat[LIGNES];

    printf("Entrez les éléments de la matrice (%dx%d) :\n", LIGNES, COLONNES);
    for (int i = 0; i < LIGNES; i++) {
        for (int j = 0; j < COLONNES; j++) {
            printf("M[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &matrice[i][j]);
        }
    }

    printf("Entrez les éléments du vecteur (%d éléments) :\n", COLONNES);
    for (int i = 0; i < COLONNES; i++) {
        printf("V[%d] = ", i + 1);
        scanf("%d", &vecteur[i]);
    }

    for (int i = 0; i < LIGNES; i++) {
        resultat[i] = 0;
        for (int j = 0; j < COLONNES; j++) {
            resultat[i] += matrice[i][j] * vecteur[j];
        }
    }

    printf("Le résultat du produit matrice-vecteur est :\n");
    for (int i = 0; i < LIGNES; i++) {
        printf("%d\n", resultat[i]);
    }
}

// ...existing code...