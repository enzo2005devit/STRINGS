#include <stdbool.h>
#include <stdio.h>

int main()
{
    
    bool compararpalabras (char palabra_1[], char palabra_2[]);
    char palabra_1[]="texto";                                  //escribir la palabra
     char palabra_2[]="texto";                                // escribir la palabra
     
     if (compararpalabras(palabra_1, palabra_2)==1){
         printf("las palabras son iguales");
     }
     else{
         printf("las palabras son diferentes");
     }
}

 bool compararpalabras (char palabra_1[], char palabra_2[]){
     int i=0;
     bool iguales;
     while (palabra_1[i]==palabra_2[i] && palabra_1[i] != '\0' && palabra_2[i] != '\0'){
         
         i++;
         if(palabra_1[i]==palabra_2[i]){
             iguales= true;
         }
         else {
             iguales = false;
         }
     }
     return iguales;
 }