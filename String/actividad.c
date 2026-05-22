#include <stdio.h>
#include <string.h>

int main()
{
    char alumno1[16] = "Antonio";
    char alumno2[16];

        printf("El nombre del primer alumno es %s\n", alumno1);
        printf("Por favor ingrese el nombre del segundo alumno\n");
        fgets(alumno2, sizeof(alumno2), stdin);
        printf("El nombre del segundo alumno es %s", alumno2);

    return 0;
}
