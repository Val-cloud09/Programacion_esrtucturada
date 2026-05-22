#include <stdio.h>

int main()
{
    char alumno1[16] = "Antonio";
    char alumno2[16];

        printf("El nombre del primer alumno es %s\n", alumno1);
        printf("Por favor ingrese el nombre del segundo alumno\n");
        scanf("%s", alumno2);
        printf("El nombre del segundo alumno es %s\n", alumno2);

    return 0;
}
