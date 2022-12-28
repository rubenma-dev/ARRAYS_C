/*En este ejemplo se muestra un programa ineficiente, y ademAs dificil de ampliar
* para encontrar el mayor de tres numeros. 
* Como podemos ver para encontrar el mayor de mas de tres numeros necesitariamos reescribir el programa casi por completo.
* Pero si hacemos uso de arreglos podemos mejorar un poco esto, 
* por lo menos facilitando la reutilizacion y mantenimiento del programa.
*/
    /* Ejemplo : el mayor de cuatro numeros.. */
    
    #include <stdio.h> 
    #include <stdlib.h>
    #define N 4
    
    int main()
    {
	  int numero[N], contador, mayor;
	  for (contador = 0; contador < N; contador++) 
	       {
            	 printf("Dime un valor : ");
            	 scanf("%i",&numero[contador]);
               }
	  for (contador = 0; contador < N; contador++) 
	       {
          	 if ((numero[contador] > mayor) || (contador == 0))
                     {
                      mayor = numero[contador];
                     }
       	       }
        printf("El mayor es : %i \n\n", mayor);
        system("pause");
        return 0;
    }         
