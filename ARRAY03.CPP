/* Para entender con mayor claridad la practicidad y funcionalidad de los arreglos 
* se muestra el siguiente ejemplo: 
* Suponiendo que tenemos una cantidad n de valores y queremos determinar cual de ellos es el mayor. 
* Suponiendo que no tenemos conocimientos del uso de arreglos, en caso de que se nos presentase el problema anterior 
* tendriamos que hacer algo como lo que se muestra a continuacion.
*/
    /* Ejemplo : el mayor de tres numeros.. */ 
	  
    #include <stdio.h> 
    #include <stdlib.h>
	 
    int main()
    {
        int numero_uno, numero_dos, numero_tres;

        printf("Dime un valor : ");
        scanf("%i",&numero_uno); 
        printf("Dime otro valor : ");
        scanf("%i",&numero_dos); 
        printf("Dime otro valor : ");
        scanf("%i",&numero_tres);
		 
        if ((numero_uno > numero_dos) && (numero_uno > numero_tres))
           {
            printf("el mayor es %i \n",numero_uno);
           }
        else if ((numero_dos > numero_uno) && (numero_dos > numero_tres))
		            { 
                 printf("el mayor es %i \n",numero_dos);
                }
        else
		       { 
            printf("el mayor es %i \n",numero_tres);
	         }
        return 0;
    } 
