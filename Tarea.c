#include <stdio.h>
#include <stdlib.h>

// EJEMPLO 1


long factorialRecursivo(int n) {
    if (n < 0) {
        printf("No se puede calcular el factorial de un número negativo.\n");
        return -1;
    }
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorialRecursivo(n - 1);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s <numero>\n", argv[0]);
        return 1;
    }

    int num = atoi(argv[1]); // Convertir argumento a entero
    long resultado = factorialRecursivo(num);

    if (resultado != -1)
        printf("El factorial de %d es: %ld\n", num, resultado);

    return 0;
}

// EJEMPLO 2

#include <stdio.h>
#include <stdlib.h>

long factorialIterativo(int n) {
    if (n < 0) {
        printf("No se puede calcular el factorial de un número negativo.\n");
        return -1;
    }

    long resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s <numero>\n", argv[0]);
        return 1;
    }

    int num = atoi(argv[1]);
    long resultado = factorialIterativo(num);

    if (resultado != -1)
        printf("El factorial de %d es: %ld\n", num, resultado);

    return 0;
}


// EJEMPLO 3

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int i;
    chat * num = argv[1];
    fprintf(stdout,"argv[1] =  %s \n", argv[1]);
    for (i = 0; i < strlen(argv[1]); i++)
        fprintf(stdout, "num[%d] = %c \n ",i, num[i]);
        return 0;
    
}