/*Arreglos
Ejemplos de Vector.
1. A continuacion se muestra un programa que cuenta
el numero de apariciones de los numeros 0, 1, 2, 3
en una secuencia de enteros acabada en -1.
*/
    #include <stdio.h>
    
    int main()
    {
	  int numero = 100, contador0 = 0, contador1 = 0, contador2 = 0, contador3 = 0;
	
	  scanf("%d", &numero);
	  while (numero != -1)
          {
	          if (numero == 0)
			          {
			  	        contador0++;
			          }
            if (numero == 1)
			          { 
			            contador1++;
			          }
            if (numero == 2)
			          { 
			            contador2++;
			          }
            if (numero == 3)
			          { 
			            contador3++;
			          }
	           scanf("%d", &numero);
          } 
      printf("Contadores: cero: %d, uno: %d, dos: %d, tres: %d\n", contador0, contador1, contador2, contador3);
      return 0; 
    }
