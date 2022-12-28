/*¿Que ocurrira¡ si tuviesemos que contar
*
*las apariciones de los cien primeros numeros enteros? 
*¿Deberiamos declarar cien contadores y escribir cien construcciones if para cada caso?
*La respuesta, como era de esperar, se halla en el uso de vectores. 
*Veamoslo en el siguiente programa:
*
*/

    #include <stdio.h> 
    #define MAX 100
    
    int main() 
    {
	   int i, cont[MAX], numero;
	   for (i = 0; i < MAX; i++)
	        cont[i] = 0;
	        scanf("%d", &numero);
	    
     while (numero != -1) 
          {
            if ((numero >= 0) && (numero <= MAX))
               {
                 cont[numero]++; 
                 scanf("%d", &numero );
               }
          }
            
     for (i= 0; i< MAX; i++) 
     printf("Contador [%d] = %d\n", i, cont[i]);
     return 0;
    } 
