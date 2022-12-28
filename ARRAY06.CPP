/* Esta es una manera todavia mas optima porque permite que el usuario
* decida que cantidad de numeros el va a introducir para comparar en tiempo de ejecucion.
* Eso significa que no necesitamos recompilar el codigo.

* 2- Vamos a crear un programa que lea un vector de 10 posiciones
* luego determine si la quinta posicion es positiva,
* si la primera posicion es negativa y si la ultima posicion es cero.(*)
*/

    #include <stdio.h>
    #include <conio.h>
    #define N 10
    
    int main()
    {
        float  x[N];
        int  i;

        for(i=0;  i<N; i++) 
	   {
            printf("Ingrese el valor %d:\n", i);
            scanf("%f",  &x[i]);
           }
        if(x[4]> 0)
	   {   
            printf( "La quinta Posicion es Positiva\n\n");
           }
	 if(x[0]< 0)
	   {
            printf("La primera Posicion es Negativo\n\n");
           }
	 if(x[N-1]== 0)
	   {
            printf( "La ultima Posicion es Cero\n\n");
           }     
      getch();
      return  0;
    }
