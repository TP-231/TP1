#include<stdio.h>

void Inverser() {
    int n;
    printf("Entrez la taille du tableau: ");
    scanf("%d", &n);

    int tableau[n];
    for (int i = 0; i < n; i++) {
        printf("Entrer l'element %d du tableau: ", i + 1);
        scanf("%d", &tableau[i]);
    }

    int g = 0;
    int d = n - 1;
    while (g < d) {
        int tmp = tableau[g];
        tableau[g] = tableau[d];
        tableau[d] = tmp;
        g++;
        d--;
    }

    printf("Tableau inverse: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");
}

void SomMat() {
    int M[2][2], L[2][2], M_plus_L[2][2];
    int i, j;

    printf("Entrez les elements de la premiere matrice 2x2 (M):\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("M[%d][%d] = ", i, j);
            scanf("%d", &M[i][j]);
        }
    }

    printf("Entrez les elements de la deuxieme matrice 2x2 (L):\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("L[%d][%d] = ", i, j);
            scanf("%d", &L[i][j]);
        }
    }

    printf("\n=== Matrices M et L ===\n");
    for(i = 0; i < 2; i++) {
        printf("%d %d   ", M[i][0], L[i][0]);
        printf("%d %d\n", M[i][1], L[i][1]);
    }

    //addition des deux matrices
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            M_plus_L[i][j] = M[i][j] + L[i][j];
        }
    }

    //la somme des deux matrices
    printf("\n=== M + L ===\n");
    for(i = 0; i < 2; i++) {
        printf("%d %d\n", M_plus_L[i][0], M_plus_L[i][1]);
    }
}
