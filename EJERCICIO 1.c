#include <stdio.h>
int z;
int main()
{
char palabra[21];
printf("ingrese la palabra:");
scanf("%s",palabra);
printf("%s",palabra);
for (z=0;z<21;z++){
    if (palabra[z]==0)
    break;
}
printf("\n cantidad de letras:%d",z);
}