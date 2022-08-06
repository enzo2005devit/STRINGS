#include <stdio.h>
#include <string.h>
int cantidad = 0;
char palabra[50];
int i = 0;
char salida[50] = { 0 };

int
main ()
{
  printf ("ingrese la palabra a codificar en codigo Cesar:");
  scanf ("%s", palabra);  //ingreso de la palabra a encriptar
  while (palabra[i] != 0)  //ciclo while para recorrer la palabra ingresada caracter por caracter
    {
      if (palabra[i] == 'X' || palabra[i] == 'Y' || palabra[i] == 'Z'
	  || palabra[i] == 'x' || palabra[i] == 'y' || palabra[i] == 'z')  //casos especiales que tienen que volver al principio de del abecedario para encriptar en Cesar
	{

	  switch (palabra[i])
	    {
	    case 'X':
	      salida[i] = 'A';
	      break;

	    case 'Y':
	      salida[i] = 'B';
	      break;

	    case 'Z':
	      salida[i] = 'C';
	      break;

	    case 'x':
	      salida[i] = 'a';
	      break;

	    case 'y':
	      salida[i] = 'b';
	      break;

	    case 'z':
	      salida[i] = 'c';
	      break;
	    } //que hacer en cada caso (mayusculas y minusculas)
	}
      salida[i] = palabra[i] + 3;  //se encripta en codigo cesar la palabra por separado de las excepciones
      i++;
    }
  printf ("\nla palabra ingresada encriptada en codigo Cesar es %s", salida); //se muestra la palabra encriptada
  return 0;
}