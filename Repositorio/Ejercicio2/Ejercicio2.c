/*Escriba un programa que almacene cuantas letras a tiene una palabra en la primera línea, 
cuantas letras e en la segunda, cuantas letras i en la tercera, y así sucesivamente para las demás vocales.*/

#include <stdio.h>

int main(){

//Declaramos las variables, estas son para almacenar la cantidad de vocales que hay en la palabra que se examine
    int cant_e=0, cant_i=0, cant_o=0, cant_u=0;
    int cant_a=-3;
//La variable para guardar la palabra ingresada
    char palabra[50];
//Aqui solicitamos la palabra y tambien la almacenamos
    printf("Escriba una palabra: ");
    scanf("%s", palabra);
    printf("%s", palabra);

/*Para poder saber la cantidad de veces que se repite una vocal en la palabra, 
se crea un for para saber la cantidad de veces que se repite y en los mismos guardarlos en su respectiva variable de contador*/

    //Este es el "for" correspondiente para "a"
    for (int q = 0; q < 50; q++)
    {
        if(palabra[q] == 97){
            cant_a++;  
        }
    }
    //Este es el "for" correspondiente para "a"
    for (int q = 0; q < 50; q++)
    {
        if(palabra[q] == 101){
            cant_e++;  
        }
    }
    //Este es el "for" correspondiente para "a"
    for (int q = 0; q < 50; q++)
    {
        if(palabra[q] == 105){
            cant_i++;  
        }
    }
    //Este es el "for" correspondiente para "a"
    for (int q = 0; q < 50; q++)
    {
        if(palabra[q] == 111){
           cant_o++;  
        }
    }
    //Este es el "for" correspondiente para "a"
     for (int q = 0; q < 50; q++)
    {
        if(palabra[q] == 117){
            cant_u++;  
        }
    }
    

//Se crea un archivero para guardar las palabras y cantidad de vocales
    FILE *oraciones;
 
    oraciones = fopen("oraciones.txt", "a");

    //Es buena practica confirmar que el archivo se ha abierto correctamente
	if (oraciones==NULL){
        printf("ERROR!"); 
        }
        
        else{
            
                fprintf(oraciones, "%s \n", palabra);
                 fprintf(oraciones, "La cantidad de A en la oracion son: %i \n", cant_a);
                  fprintf(oraciones, "La cantidad de E en la oracion son: %i \n", cant_e);
                   fprintf(oraciones, "La cantidad de I en la oracion son: %i \n", cant_i);
                    fprintf(oraciones, "La cantidad de O en la oracion son: %i \n", cant_o);
                     fprintf(oraciones, "La cantidad de U en la oracion son: %i \n", cant_u);
            
        }
            
            
 //Es buena practica que el archivo se ha cerrado
	fclose ( oraciones );
    

    






    return 0;
}