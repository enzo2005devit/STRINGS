#include <stdio.h>
#include <string.h>
char nombres[50];
int cantidad = 0;
int i;
char mayor[50];

int
main ()
{
  printf
    ("ingrese los nombres y escriba la palabra 'FIN' para finalizar el ingreso:");
  scanf ("%s", mayor);		//ingreso de nombres
  while (1)
    {
      scanf ("%s", nombres);
      if (strcmp (nombres, "FIN") == 0)	//finalizacion en caso de que se escriba la palabra FIN
	{
	  break;
	}

      if (strcmp (mayor, nombres) > 0) 
	{			
	  strcpy (mayor, nombres);
	}//ordenamiento por alfabeto
    }
  printf ("\n%s", mayor); //muestreo de primer nombre segun el alfabeto
  return 0;
}