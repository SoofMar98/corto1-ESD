#include <iostream>
#include <stdio.h>
#define TAM 30
    void CargarVector(int arr[TAM], int cantidad);
    void mostrarVector(int *arr, int cantidad);
    void EliminarElemento(int arr[TAM], int *cantidad, int elem);

    int main(){
        int option;
        int arr[TAM];
        int cantidad;
        int elem;
        
        //es para ver el menu
        do{
            printf("Menu\n");
            printf("-----\n");
            printf("0: Salir\n");
            printf("1: Cargar vector\n");
            printf("2: Mostar vector\n");
            printf("3: Eliminar vector\n");
            scanf("%d", &option);
            //aqui es los datos que ingresara el usuario
            switch(option){
                case 1: printf("Cuantos elementos desea ingresar?"); scanf("%d", &cantidad);
                    CargarVector(arr, cantidad); break;
                case 2:
                    mostrarVector(arr, cantidad); break;
                case 3: printf("Ingrese elemento a eliminar: "); scanf("%d", &elem);
                    EliminarElemento(arr, &cantidad, elem); break;
            }
        } while(option!=0);

        return 0;
    }

    //estos son los procedimientos
    void CargarVector(int arr[TAM], int cantidad){
        int i;

        for(i= 0; i<cantidad; i+=1){
            printf("Ingrese elemento: "); scanf("%d", &arr[i]);
        }
    }

    void mostrarVector(int *arr, int cantidad){
        int i;
        for(i= 0; i<cantidad; i+=1){
            printf("Elemento[%d]= %d\n", i, arr[i]);
        }
    }

    void EliminarElemento(int arr[TAM], int *cantidad, int elem){
        int i;

        for(i= elem; i<*cantidad-1; i+=1){
            arr[i]= arr[i+1];
        }
        *cantidad-=1;
    }
