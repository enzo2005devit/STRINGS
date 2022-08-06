#include <stdio.h>

char palabra[21];
int i;

int main()
{
printf("escriba una palabra de maximo 20 letras:");
scanf("%s",palabra);
i=0;
while (palabra[i++]!='\0');
printf("%s escrita al revez es:", palabra);
while(i>=0)
printf("%c",palabra[i--]);
}