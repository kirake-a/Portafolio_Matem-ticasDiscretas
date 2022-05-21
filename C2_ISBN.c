/* Programa que calcula el check digit del un ISBN 10 */
#include <stdio.h>
#define TAM 9

int sumatoria(int ISBN[TAM]);

int main(){

    int ISBN[TAM];
    int i, sumatoria_arreglo;
    int check_digit;

    printf("Inserte uno por uno los 9 numeros que conoce\n\n");
    for (i = 0; i < TAM; i++){
        printf("Inserte al #%d: ", i + 1);
        scanf("%d", &ISBN[i]);
    }

    sumatoria_arreglo = sumatoria(ISBN);

    check_digit = sumatoria_arreglo % 11;

    if(check_digit < 0 || check_digit >= 10){
        printf("\nSu ISBN no es valido... \nDigito verificador: %d!!!", check_digit);
    }
    else{
        printf("\nISBN correcto... \nSu digito verificador es: %d", check_digit);
    }

}

int sumatoria(int ISBN[TAM]){
    int i, sumatoria_arreglo = 0;

    for (i = 0; i < TAM; i++){
        ISBN[i] = ISBN[i] * (i + 1);
    }

    for (i = 0; i < TAM; i++){
        sumatoria_arreglo = sumatoria_arreglo + ISBN[i];
    }

    return sumatoria_arreglo;
}