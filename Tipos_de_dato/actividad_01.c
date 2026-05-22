include<stdio.h>

int main() {

    char letra = 'a';
    int entero = 55;
    double preciso = 999.9999;
    float decimal = 8.5;
    short small = 10;
    long grande = 60000;
    char texto[] = "Hola";


    printf("Direccion de char:   %p\n", (void*)&letra);
    printf("Direccion de int:    %p\n", (void*)&entero);
    printf("Direccion de float:  %p\n", (void*)&decimal);
    printf("Direccion de double: %p\n", (void*)&preciso);
    printf("Direccion de short:  %p\n", (void*)&small);
    printf("Direccion de long:   %p\n", (void*)&grande);
    printf("Direccion de texto:  %p\n", (void*)&texto);

    return 0;
}
