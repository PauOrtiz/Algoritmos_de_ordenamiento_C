#include <stdio.h>
int main ()
{
    int arreglo [8]= {9,8,7,6,5,4,3,2}; 
    int índice, pos, aux;
    for (indice=0; indice<8; indice++) {
        pos=indice;    
        aux=arreglo[indice];
        while((pos>0)&& arreglo [pos-1])
        {
            arreglo[pos]=arreglo[pos-1];
            pos--;
        }
        arreglo[pos]=aux;
    } 
    printf("El arreglo ordenado es:\n");
    for (indice=0;indice<8; indice++)
    {
     printf("%i,”, arreglo[indice]);
    }
    getchar ();
    return 0;
}
   
