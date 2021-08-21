/*
 * Ejercicio leds
 * Por: Francisco Santana
 * Fecha: 18 de agosto de 2021
 * 
 * Este programa muestra un ejercicio simulando el encendido 
 * de cuatro leds, prendiendo solo uno a la vez, de manera ascendente.
 * 
 * 
 */

// Bibliotecas
#include <stdio.h>

//funcion para el retardo
void mili(){
    int segun=2*1e8;//define la cantidad de segundos que tarda en hacer el siguiente proceso
    int z;
    for(z=0;z<segun;z++);//contador hasta llegar a la cantidad de segundos
}

int main () {
    //arreglo de cuatro leds, donde el 0 indica que estan apagados
    int led[4]={0,0,0,0};
    // Variables del programa
    int i,j,k;
    int on=1; //encendido = 1
    int off=0; //apagado = 0

    //se ejecuta el programa en un ciclo infinito 
    while(1){
    for(i=4;i>=0;i--){ //cliclo que recorre el arreglo de 4 posicines, de derecha a izq
        led[i+1]=off;//apaga el led de la derecha para que no quede encendido en el recorrido
        led[i]=on;//enciende el led segun el recorrido del ciclo

    //este if asegura que en la ultima posicion del recorrido, el led no quede encendido
    //ya que indica que cuando comience nuevamente el ciclo, este se apague
        if(i==4){
            led[0]=off;
        }
        mili();//funcion para el retardo
    //este ciclo for se asegura de imprimir el arreglo en todas sus posiciones    
    for(j=0;j<4;j++)    
    printf("%d ",led[j]);//imprime en pantalla el arreglo
    printf("\n");//salto de linea, para mostrar resultados hacia abajo 
    }//fin cliclo for  
}//fin ciclo infinito
    return 0;    
}//Fin del programa

