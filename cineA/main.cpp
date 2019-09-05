#include <iostream>
#include <stdio.h>
#include <math.h>
int main() {
    using namespace std;

    int opciones,fila,columna,i,j;
    char asientos[5][5];
    double totalPagar=0, ganancias=0;

    for (int (i) = 0; (i) < 5;  ++(i)) {
        for (int j = 0; j < 5; ++j) {
            asientos[i][j]='L';

        }

    }

    //el menu
    while (opciones<=4 )
        printf("Selecione una opcion \n1.asignar asientos \n2.Vender \n3.Ganancias \n4.Salir");
        scanf("%d",opciones);

        if(opciones==1) {

            printf("\nEscribe la fila: ");
            scanf("%d", &fila);
            printf("\nEscribe la columna: ");
            scanf("%d", &columna);
            if (asientos[fila - 1][columna - 1] == 'L') {
                if (fila == 1) {
                    totalPagar = 5;
                    ganancias = ganancias * totalPagar;
                } else if (fila == 5)
                    totalPagar = 2.5;
                ganancias = ganancias * totalPagar;

            }else{
                printf("El asiento ya esta ocupado");
        }
            }

        //mostrar las ganancias que se obtienen en cada momento
        if(opciones==2) {
            printf("Total en ventas %d", ganancias);
        }

        if(opciones==3){
                if(fila==2){
                total a pagar=3.5;
                ganancias = ganancias*totalPagar;

        }


    }


