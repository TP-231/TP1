int Trier(){
    int n;
    printf("entrez la taille du tableau:",n);
    scanf("%d",&n);
    int tab[n];
    for(int i=0;i<=n;i++){
 printf("entrer chaque élément du tableau");
 scanf("%d",tab[i]);
    }
if(n<2){
//Un tableau avec 0 ou 1 élément est toujours considéré comme trié
return 1;
}
for(int i=0; i<n-1; i++){
if(tab[i]>tab[i+1]){
return 0;
}
}
return 1;
}

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
