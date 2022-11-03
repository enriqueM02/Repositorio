/*Escriba un programa que en un archivo escriba los número positivos por el usuario y en otro los negativos.*/
#include <stdio.h>



int main()
{
    int arr[5];

    int arrp[5];
    int arrn[5];

    printf("Escriba 5 numeros que sean enteros ya sea positivo o negativos.\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Introduzca el %i numero: ", i+1);
        scanf("%i", &arr[i]);

        if (arr[i]> 0)
        {
        
            arrp[i] = arr[i];
        }
        else{
            arrp[i] = 0;
        }
        
       

        if (arr[i]< 0)
        {
            arrn[i] = arr[i];
        }
        else{
            arrn[i] = 0;
        }
       
        
        
        
    }

    FILE *positivo;

    char letra='a';

    
    
    positivo = fopen("positivo.txt", "a");

    //Es buena practica confirmar que el archivo s e ha abierto correctamente
	if (positivo==NULL){
        printf("ERROR!"); 
        }
        
        else{
            for (int i = 0; i < 5; i++)
            {
                fprintf(positivo, "%d ", arrp[i]);
            }
        }
            
            

	fclose ( positivo );


    FILE *negativo;

    negativo = fopen("negativo.txt", "a");

    //Es buena practica confirmar que el archivo se ha abierto correctamente
	if (negativo==NULL){
        printf("ERROR!"); 
        }
         else{
            for (int i = 0; i < 5; i++)
            {
                 fprintf(negativo, "%d ", arrn[i]);
            }
        }
            


	fclose ( negativo );

    



	return 0;
}

    