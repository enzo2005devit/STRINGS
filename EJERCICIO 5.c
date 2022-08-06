#include <stdio.h>
int i;
int z;
int contador=0;
int contadorr=0;

int main()
{
char palabra[21];
printf("ingrese la palabra:");
scanf("%s",palabra);
for (z=0;z<20;z++){
    if (palabra[z]==0){
       break; 
    }
    if (palabra[z]==97 || palabra[z]==101 || palabra[z]==105 || palabra[z]==111 || palabra[z]==117){
        contador++;
 
        
    }
}


for(i=0;i<20;i++){
    if (palabra[i]==0){
       break; 
    }
    if (palabra[i]== 65 || palabra[i]== 69 || palabra[i]== 73 || palabra[i]== 79 || palabra[i]== 85){
        contadorr++;
       
    }
    
}