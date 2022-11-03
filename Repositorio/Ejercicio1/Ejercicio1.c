/*Escriba un programa que en un archivo escriba los número positivos por el usuario y en otro los negativos.*/
#include <stdio.h>



int main()
{
//Se crea un arreglo para poder guardar los numeros a introduccir los numeros
    int arr[5];
//Se crea un arreglo para poder guardar los numeros a introduccir los numeros y separarlos por positivos o negativos

    int arrp[5];
    int arrn[5];

//Solicitamos 5 numeros que sean enteros ya sea positivo o negativos.
    printf("Escriba 5 numeros que sean enteros ya sea positivo o negativos.\n");

//Nos apoyamos mediante "for" para pedir los numeros y a la vez guardarlos en su lugar
    for (int i = 0; i < 5; i++)
    {
        printf("Introduzca el %i numero: ", i+1);
        scanf("%i", &arr[i]);
    //Mediante un "if" comparamos el numero de la posicion "i" y vemos si es mayor que 0
        if (arr[i]> 0)
        {
        
            arrp[i] = arr[i];
        }
        else{
            arrp[i] = 0;
        }
        
       //Mediante un "if" comparamos el numero de la posicion "i" y vemos si es menor que 0

        if (arr[i]< 0)
        {
            arrn[i] = arr[i];
        }
        else{
            arrn[i] = 0;
        }
       
        
        
        
    }
//Se crea un archivero para guardar los numeros positivos
    FILE *positivo;

    char letra='a';

    
    
    positivo = fopen("positivo.txt", "a");

    //Es buena practica confirmar que el archivo se ha abierto correctamente
	if (positivo==NULL){
        printf("ERROR!"); 
        }
        
        else{
            for (int i = 0; i < 5; i++) //Mediante el "for" nos ayudamos para imprimir cada arreglo
            {   
                // Mediante un " fprintf" guardamos el numero
                fprintf(positivo, "%d ", arrp[i]);
            }
        }
            
            
    //Es buena practica que el archivo se ha cerrado
	fclose ( positivo );


    FILE *negativo;

    negativo = fopen("negativo.txt", "a");

    //Es buena practica confirmar que el archivo se ha abierto correctamente
	if (negativo==NULL){
        printf("ERROR!"); 
        }
         else{  
            for (int i = 0; i < 5; i++) //Mediante el "for" nos ayudamos para imprimir cada arreglo
            { 
                // Mediante un " fprintf" guardamos el numero
                 fprintf(negativo, "%d ", arrn[i]);
            }
        }
            

    //Es buena practica que el archivo se ha cerrado
	fclose ( negativo );

    



	return 0;
}

    