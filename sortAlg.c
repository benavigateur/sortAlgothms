#include <stdio.h>

// ALGHORITHME DE TRI

void afficher(int tab[], int taille){
    
    for(int i = 0; i < taille; i++){
        printf("[%d]", tab[i]);
    }
}

//SELECTION

void tri_selection(int tab[],int taille){

    printf("\nTRIE PAR SELECTION \n");
    for(int i = 0; i < taille - 1; i++){
        int temp, min; 
        min = i;
        for(int j = i+1; j < taille; j++){
            if(tab[j] < tab[min]){
                min = j;
            }

        }
        temp = tab[i];
        tab[i] = tab[min];
        tab[min] = temp;
    }
}

//INSERTION

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

//BUBLLE

void tri_bulle(int tab[],int taille){

    printf("\nTRIE  A BULLE \n");
    
    for(int i = 0; i < taille - 1; i++){
        int temp; 
        for(int j = taille-1; j > i; j--){
            if(tab[j] < tab[j-1]){
                temp = tab[i]; 
                tab[i] = tab[j-1];
                tab[j-1] = temp;
            }
        }
    }
}


void SimpleSearch(int tab[], int taille, int search){
    int i = 0;
   if(i > 0){
    
    return -1;

   } else {

    while( i > 0){
        search = tab[taille - i];
        i--;
        return search;

    }

   }
        
     
}




int main() {

    printf("\n[RANDOM  TABLE] \n");
    int taille = 10;
    int tableau[] = {7,2,9,0,4,6,1,8,3,5};
    afficher(tableau, taille);



    
   


    return 0;
}




