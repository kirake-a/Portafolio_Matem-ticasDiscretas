#include <stdio.h>

int comprobarEncendido(int x, int y, int z);
void output(int swich);

int main(){
    int x, y, z, swich;

    printf("Compruebe si los valores x, y ,z dados encienden en circuito o no.");

    printf("\nInserte el valor de x: ");
    scanf("%d", &x);
    printf("Inserte el valor de y: ");
    scanf("%d", &y);
    printf("Inserte el valor de z: ");
    scanf("%d", &z);

    swich = comprobarEncendido(x, y, z);
    output(swich);

    return 0;
}

int comprobarEncendido(int x, int y, int z){
    int swich;

    if(x == 0 && y == 0 && z == 0){
        swich = 1;
    }
    else if (x == 0 && y == 1 && z == 1){
        swich = 1;
    }
    else if (x == 1 && y == 0 && z == 1){
        swich = 1;
    }
    else if (x == 1 && y == 1 && z == 0){
        swich = 1;
    }
    else{
        swich = 0;
    }

    return swich;
}

void output(int swich){

    if(swich == 1){
        printf("\n\nEl circuito esta encendido...");
    }
    else if(swich == 0){
        printf("\n\nEl circuito esta apagado...");
    }
}