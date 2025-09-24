#include<stdio.h>
void trier(){
    int n;
    int tab[];
    printf("entrez la taille du tableau:",n);
    scanf("%d",&n);
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

void inverser(){
    int n;
    int tableau[];
    printf("entrez la taille du tableau:",n);
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
 printf("entrer chaque élément du tableau");
 scanf("%d",tableau[i]);
    }
int g=0;
int d=n-1;
while(g<d){
int tmp=tableau[g];
tableau[g]=tableau[d];
tableau[d]=tmp;
g++;//On avance vers d
d--;//On recule vers g
}
}
