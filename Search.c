#include <stdio.h>
#define taille_max 100


void afficher(int tab[], int taille){
    int i;
    for(i = 0; i < taille; i++){
        printf("[ %d ]", tab[i]);
    }
}


//SIMPLE SEARCH

int Search(int tab[], int taille, int val){
    int i = 0;
    while(taille > i){
        if(tab[i]== val){
            return i;

        } else {
            i++;
        }
    }
    return -1;
}


//RECURQSIVE SEARCH

int recursive_search(int tab[], int taille, int val){
    if(taille == -1){
        return -1;

    } else if (tab[taille] == val){
        return taille;

    } else {

        return recursive_search(tab, taille - 1, val);
    }
}


int main() {
    
    
    int tab[taille_max];
    int taille;
    int i;

    printf("\nDONNEZ LA TAILLE DU TABLEAU \n");

    scanf("%d", &taille);

    for(i = 0; i < taille; i++){
        printf("[%d] ", i );

        scanf("%d", &tab[i]);
    }
    
    afficher(tab, taille);

    int value;
    printf("\nentre l'element a trouvé\n");
    scanf("%d", &value);

    int pos = recursive_search(tab, taille, value);

    if(pos == -1){
        printf("l'element cherché n'est pas dans le tab" );

    } else {

        printf("l'element se trouve à l'indice %d", pos);
    }


   
} 





