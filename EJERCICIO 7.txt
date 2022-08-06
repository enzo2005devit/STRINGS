#include <string.h>

int main()
{
    int valor = 0;
    int mayor = 0;
    char string[20];
    char string_mayor[20];

    // Ingreso del primer numero
    
    scanf("%s", &string_mayor);
    scanf("%d", &mayor);
// recorro valores  strings ingresados
    for(int i = 0; i < 4; i++)
    {
        scanf("%s", &string);
        scanf("%d", &valor);

        if(valor >= mayor)
        {
            mayor = valor;
            strcpy(string_mayor, string);
        }

    }

    printf("La mayor edad es %d anos, (%s)\n", mayor, string_mayor);

    return 0;
}