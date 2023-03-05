#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int aloc_memory(int tamano, double *arreglo){
    arreglo = (double *)calloc(tamano, sizeof(double));
}

int main(){
    return 0;
}