
#include <iostream>

int main()
{
    int lineas;
    printf("Ingresa el tamaño del triangulo: ");
    scanf("%d", &lineas);
    int i;
    for (i = 1; i <= lineas; i++)
    {
        int j;
        for (j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
