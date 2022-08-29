//
// Created by Josean Camarena on 07/07/22.
// Implemented by: $STUDENT$
//

#include "pointers.h"

//Funciones de apoyo
void swap(int *a, int *b){
    int pivote = *a;
    *a = *b;
    *b = pivote;
}
void printCollection(int *collection){

    for(int i = 0;i <= sizeof(*collection); i++ ){ //Nota, por agregamos el *?
        printf(" %d ", collection[i]);
    }
}
//Funciones de apoyo

int bubble_sort(int *collection, int count) {
    int contador = 0;
    for(int i = 0; i < count-1;i++){
        for(int j = 0; j < count-1-i; j++){
            if(*(collection+j) >  *(collection+(j+1))){
                swap((collection+(j+1)),(collection + j));
                contador++;
            }

        }
    }
    int *swaps = &contador;
    printf("\nBubble Sort: El numero de swaps es: %d\n",*swaps);
    printCollection(collection);

  return 0;
}
void insertion_sort(int *collection, int count)
{
    int contador = 0;
    for(int i = 1; i < count; i++){
        int *slot = collection+i;
        int j = i-1;
        while (slot < collection+j && j >= 0){
            *(collection+(j+1)) = *(collection+j);
            j = j-1;
        } *(collection+(j+1)) = *(slot);
        contador++;

    }
    contador--;
    int *sort = &contador;
    printf("\n Insertion sort: El numero de swaps fue: %d\n",*sort);
    printCollection(collection);


}
void reverse(int *collection, int count)
{
    for(int i = 0; i < count/2; i++){
        swap((collection+i),(collection+(count-1-i)));
    }
    printf("\nReverse:\n");
    printCollection(collection);
}

int calulate_frequency(int *collection, int count, int target)
{
    int frecuency = 0;
    for(int i = 0; i < count-1; i++){
        if(*(collection+i)== target){
            frecuency++;
        }
    }
    printf("\nLa frecuencia de %d en el array es de: %d\n",target,frecuency);
  return 0;
}
