#include <stdio.h>

int main() {
    float x, y, resultado;
    char op;
    int valido = 1;

    printf("Ingrese la operacion: ");
    scanf("%c", &op);
    printf("Ingrese el primer operando: ");
    scanf("%f", &x);
    printf("Ingrese el segundo operando: ");
    scanf("%f", &y);

    switch (op) {
        case '+':
            resultado = x + y;
            break;
        case '-':
            resultado = x - y;
            break;
        case '*':
        case 'x':
            resultado = x * y;
            break;
        case '/':
            resultado = x / y;
            break;
        default:
            valido = 0;
    }

    if (valido)
        printf("El resultado es %f\n", resultado);
    else
        printf("Operacion invalida\n");

    return 0;
}