#include <stdio.h>
#include <stdlib.h>

int main()
{
    float tem1, tem2;
    float temp[24];
    int dummy;
    printf("Direccion de memoria de 2 flotantes: &tem1:%1,\n&tem2 %i!\n",&tem1,&tem2);
    printf("Direccion de temp[24]:%i,\n", &temp);
    printf("Direccion de &temp[24]:%i,\n", &temp[23]);
    printf("Dirceccion de &dummy:%i\n", &dummy);

    return 0;
}
