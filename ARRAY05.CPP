/* En este otro ejemplo se muestra otra solucion al mismo problema de una mejor manera haciendo uso de las virtudes de los arreglos.
* Claro que esta tampoco es la solucion mas optima. 
* Pero a diferencia del primer ejemplo a este solo se le debe cambiar el valor de n para reutilizarlo con otras cantidades de numeros, 
* o sea es un trabajo que es reutilizable y que en el futuro no tendremos que reescribir. 
* El unico problema en este pedacito de codigo es que para aumentar la cantidad de valores que soporta el programa se debe, 
* todavia, modificar el codigo y recompilar.
*/
    /* Ejemplo : el mayor de n numeros.. */
    #include <stdio.h> 
    #include <stdlib.h> 
    
    int main()
    { 
        int numero; 
        int capt, contador, mayor; 
        
        printf("Dime la cantidad de numeros que voy a comparar : ");
        scanf("%i",&numero);
		 
        for (contador = 0; contador < numero; contador++) 
		    { 
                 printf("Dime un valor : "); 
                 scanf("%i",&capt); 
              if ((capt > mayor) || (contador == 0))
			  	{ 
                  mayor = capt;
			    }
            } 
        printf("El mayor es : %i \n\n", mayor); 
        system("pause"); 
      return 0; 
    }
