#include <stdio.h>
#define taille_max 100



void afficher(int tab[], int taille){
    int i;
    for(i = 0; i < taille; i++){
        printf("[ %d ]", tab[i]);
    }
}



void tri_insertion(int tab[],int taille){

    printf("\nTRIE PAR INSERTION \n");
    for(int i = 1; i < taille; i++){
        int temp = tab[i]; int j = i;
        while( j > 0 && tab[j-1] > temp ){
            tab[j] = tab[j-1];
            j--;
        }

        tab[j] = temp;
    }
}

int BinarySearch(int tab[],  int val,  int i_deb,  int i_fin  ){
    int i_mil; 

    if(i_deb  > i_fin){
        return -1;

    }else {

        i_mil = (i_deb + i_fin)/2;
        if(tab[i_mil]== val){
            return i_mil;

        }else if(tab[i_mil] < val){
            return BinarySearch(tab, val, i_mil+1, i_fin);

        }else {
            return BinarySearch(tab, val, i_deb, i_mil - 1);
        }
    }

}





int main(){


    printf("\n[RANDOM  TABLE] \n");
    int taill = 10;
    int tableau[] = {7,2,9,0,4,6,1,8,3,5}; 

    afficher(tableau, taill);

    
    tri_insertion(tableau, taill);

    printf("\n");

    afficher(tableau, taill);

    int val; 

    printf("\nENTRE LA VALEUR A CHERCHER : \n");

    scanf("%d", &val);

    int pos = BinarySearch(tableau, val, 0, 9);

    if(pos == -1){

        printf("\npas d'element dans notre tab...\n");

    }else {
        printf("\nl'element se trouve à l'indice %d\n", pos);
    }


}