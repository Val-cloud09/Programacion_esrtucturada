#include <stdio.h>
#include <stdlib.h>

void mostrar(int v[],int n){
    int i;
    printf("\narreglos originales\n");
    for(i=0;i<n;i++){
        printf("\n[%d] = %d",i+1,v[i]);
    }
}
int filtrar(int origen[],int destino[], int n){
    int i;
    int cont=0;
    for(i=0;i<n;i++){
        if(origen[i] % 2 != 0){
            destino[cont] = origen[i];
            cont++;
        }
    }
}

int main()
{
    FILE *f;


    int arreglo1[]={1,2,3,4,5,6};
    int arreglo2[]={0,0,0,0,0,0};

    mostrar(arreglo1,6);
    filtrar(arreglo1,arreglo2,6);
    mostrar(arreglo2,6);

    f= fopen("resultado.txt","w");
    for(int i=0;i<6;i++){
    fprintf(f,"%d",arreglo2[i]);
    }
    fclose(f);

    return 0;
}
