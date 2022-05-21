#include <stdio.h>
#include <math.h>

float productoria1(float a_1, float n);
float sumProduct(float n);

int main(){
    float n, a_1, a_n;
    float mult_1, sumPorduct_resultado;

    printf("Inserte el valor a_1 para la recurrencia: ");
    scanf("%f", &a_1);
    printf("Inserte el valor de la posicion n, debera ser mayor a 1: ");
    scanf("%f", &n);

    // Retorno a main de los valores evaluados en las funciones respectivas
    mult_1 = productoria1(a_1, n);
    sumPorduct_resultado = sumProduct(n);

    // Proceso de calculo del valor a_n de la recurrencia
    a_n = mult_1 + sumPorduct_resultado + pow(n, 2);

    // Output
    printf("\nLa posicion a_%.0f = %.3f", n, a_n);

    return 0;
}

// Funcion para calcular el valor de a_1 con la primera productoria
float productoria1(float a_1, float n){
    int k;
    float productoria = 1;
    float seccion1;

    for (k = 2; k <= n; k++){
        productoria = productoria * pow(3, k);
    }

    seccion1 = a_1 * productoria;

    return seccion1;
}

// Evaluando a la sumatoria con la segunda productoria, se retorna a main el resultado
float sumProduct(float n){
    int k, r;
    float resultado = 0, productoria = 1;
    float sum;

    if(n == 2){
        resultado = 0;
    }
    else{
        
        for (k = 2; k <= n; k++){

            for (k = 2; k <= (n - 1); k++){
                sum = pow(k, 2);

                productoria = 1;

                for (r = k + 1; r <= n; r++){
                    productoria = productoria * pow(3, r);
                }

                resultado = resultado + (sum * productoria);
            }
        }
    }

    return resultado;
}
