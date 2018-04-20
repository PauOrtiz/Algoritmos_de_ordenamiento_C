#include <stdio.h>
int main()
{
    int arreglo [10]={9,8,7,6,5,4,3,2,1}; 
    int indice, k, aux;
    for (indice=0;indice<10; indice++)
    {
     for(k=0;k<10; k++)
     {
        if(arreglo[k]>arreglo[k+1])
        {
            aux=arreglo[k];
            arreglo[k]= arreglo[k+1];
            arreglo[k+1]=aux;
        }      
     }
    } 
     printf ("El orden es: \n");
    for (indice=1; indice<10; indice++)
    {
        printf ("%i", arreglo[indice]);
    }
    getchar ();
    return 0;
}
