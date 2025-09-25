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

void Recherche() {
    int n, element, i, found = 0;

    printf("Entrez la taille du tableau: ");
    scanf("%d", &n);

    int tab[n];
    printf("Entrez les elements du tableau:\n");
    for(i = 0; i < n; i++) {
        printf("tab[%d] = ", i);
        scanf("%d", &tab[i]);
    }

    printf("Entrez l'element a rechercher: ");
    scanf("%d", &element);

    for(i = 0; i < n; i++) {
        if(tab[i] == element) {
            printf("Element trouve a la position %d\n", i);
            found = 1;
            break;
        }
    }

    if(!found) {
        printf("Element non trouve dans le tableau\n");
    }
}

