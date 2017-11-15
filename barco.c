#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bienvenida();

void navegarAlSur(int *x, int *y){
    printf("Navegando al SUR! \n");
    *x = *x+0;
    *y-=10;
}
void navegarAlNorte(int *x, int *y){
    printf("Navegando al Norte \n");
    *x= *x+0;
    *y=*y+6;
}
void navegarAlEste(int *x, int *y){
    printf("Navegando al Este \n");
    *x=*x+6;
    *y=*y+0;
}
void navegarAlOeste(int *x, int *y){
    printf("Navegando al Oeste \n");
    *x=*x-9;
    *y=*y+0;
}
void imprimirPosicion(int x, int y){
    printf("La posicion actual del barco es: %d, %d \n", x, y);
    printf("\n");
}

int main() {
    int x = 0;
    int y = 0;

    bienvenida();
    imprimirPosicion(x, y);

    navegarAlSur(&x, &y);

    imprimirPosicion(x, y);

    printf("El valor de X es: %d \n", x);
    printf("La direccion de X es: %p \n", &x);
    int *direccion_x = &x;
    printf("La direccion de X guardada en otra variable es: %p \n", direccion_x);

    navegarAlSur(&x, &y);
    imprimirPosicion(x, y);

    navegarAlNorte(&x,&y);
    imprimirPosicion(x,y);

    navegarAlEste(&x,&y);
    imprimirPosicion(x,y);

    navegarAlOeste(&x,&y);
    imprimirPosicion(x,y);

    return 0;
}

void bienvenida(){
    printf("Bienvenido al barco! \n");
}
