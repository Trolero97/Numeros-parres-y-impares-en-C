#include <stdio.h>

int main()
{
    int numero;
    printf("Porfavor ingresa un nùmero");
    scanf("%d", &numero);
    if (numero % 2 == 0){
        printf("El número %d es par.\n", numero);
    } else {
        printf("El número %d es impar.\n", numero);
    }

    return 0;
}