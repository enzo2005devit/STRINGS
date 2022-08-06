#include <stdio.h>

 char abecedario [27] = "ABCDEFGHIJKLMNOPQRSTUVWXZ";
 int enteros [27] = {0};
 char palabra[50];
 int i;
 int z;
 int mayor=0;
int main()
{
printf("ingrese la palabra:");
scanf("%s",palabra);
for(i=0;i<50;i++){
    if (palabra[i] == 0){
        break;
    }
    for(z=0;z<27;z++){
        if(palabra[i]==abecedario[z]){
            enteros[z]++;
        }
    }
    
}
for(i=0;i<27;i++){
    if(enteros[mayor]<=enteros[i]){
        mayor=i;
    }
}
printf("\nla letra que mas aparecio es %c",abecedario[mayor]);

}