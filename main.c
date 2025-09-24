#include "Ques 2,6.h"
#include "Ques 3,5.h"
#include <stdio.h>

int main(){
    int choice;
    printf("Entrez votre choix:");
    printf("\n\t1. Produit de matrices\n\t2. Trouver la mediane d'un tableau\n\t3. Somme de matrices");
    printf("\n\t4. Recherche sequentiel dans un tableau\n\t5.Produit par incrementation\n\t6. Test du tabbleau trie");
    printf("\n\t7. Inverser le tableau\n\t8. Produit vectoriel\n\t9. Produit vecteur x matrice\n\t10. Quitter\n");
    scanf("%d", &choice);
    switch(choice){
        case 1:
            ProdMat();
            break;
        case 2:
            Median();
            break;
        case 6:
        	Trier();
        case 7:
        	Inverser();
        	break;
        case 10:
        	return 0;
        default:
            printf("Choix invalide");
    }
    return 0;
}