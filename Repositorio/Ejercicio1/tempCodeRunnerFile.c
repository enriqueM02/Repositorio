#include <stdio.h>

int main()
{
    FILE *a = fopen("numeros.txt", "w");

    // Es buena practica confirmar que el archivo se ha abierto correctamente
    if (a == NULL)
    {
        printf("ERROR!");
        return 1;
    }

    int num = 1;

    do
    {
        scanf("%d", &num);
        fprintf(a, "%d", num);
        fprintf(a, "\n");
    } while (num != 0);

    fclose(a);
    return 0;
}