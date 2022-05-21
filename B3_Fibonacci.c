/* Programa que imprime el valor de Fibonacci en la posicion n. Se usa la formula cerrada. */
#include <stdio.h>
#include <math.h>

int fibonacci_aplicacion(int n);

void resultado(int valor_fibonacci, int n);

int main(){

    int n, valor_fibonacci;

    printf("Digite el valor de la posicion n en la sucesion de Fibonacci: ");
    scanf("%d", &n);

    while(n <= 1){
        printf("\n\n====================================");
        printf("\nVuelva a digitar el valor de la posicion n: ");
        scanf("%d", &n);
    }

    valor_fibonacci = fibonacci_aplicacion(n);
    resultado(valor_fibonacci, n);

    return 0;
}

int fibonacci_aplicacion(int n){
    int fibonacci;

    fibonacci = (pow((1 + sqrt(5)), n) - pow((1 - sqrt(5)), n)) / (pow(2, n) * sqrt(5));

    return fibonacci;
}

void resultado(int valor_fibonacci, int n){
    printf("\nEl valor de fibonacci en la posicion %d es: %d", n, valor_fibonacci);
}