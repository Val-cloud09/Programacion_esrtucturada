#include <stdio.h>
#include <stdlib.h>

void Mostrar_Menu(){
    printf("Evaluar Edad [1]\n");
    printf("Aplicable para Beca [2]\n");
    printf("Validar Beca [3]\n");
    printf("Evaluar Numero [4]\n");
    printf("Salir [5+]\n");
    printf("\nIngrese el numero del programa a ejecutar: ");
}

int Ingresar_Edad() {
    int edad;
    printf("Ingrese su edad: ");
    scanf("%d", &edad);
    return edad;
}

void Ingresar_Promedio_y_Materias_Reprobadas(int *promedio, int *reprobadas) {
    printf("Promedio: ");
    scanf("%d", promedio);
    printf("Numero de materias reprobadas: ");
    scanf("%d", reprobadas);
    *promedio = abs(*promedio);
    *reprobadas = abs(*reprobadas);
    if (*promedio > 100) { *promedio = 100; }
}

void Evaluar_Edad(){
    int edad = Ingresar_Edad();
    if (edad < 0) { printf("No existes\n"); }
    else if (edad >= 18) { printf("Eres mayor de edad\n"); }
    else { printf("Eres menor de edad\n"); }
    printf("\n");
}

void Aplicable_Beca() {
    int promedio, reprobadas;
    Ingresar_Promedio_y_Materias_Reprobadas(&promedio, &reprobadas);
    if (promedio >= 85 && !reprobadas) { printf("Eres aplicable para la beca\n"); }
    else { printf("No eres aplicable para la beca\n"); }
    printf("\n");
}

int esPrimo(int num) {
    if (num < 2) { return 0; }
    for (int n = 2; n < num; n++) {
        if (num % n == 0) { return 0; }
    }
    return 1;
}

void Validar_Beca() {
    int promedio, reprobadas, obtenible = 1;
    int edad = Ingresar_Edad();
    Ingresar_Promedio_y_Materias_Reprobadas(&promedio, &reprobadas);
    if (edad < 18) { printf("Tienes que ser mayor de edad para aplicar\n"); obtenible = 0; }
    if (promedio < 90) { printf("Necesitas promedio de 90 o mas\n"); obtenible = 0; }
    if (reprobadas) {
        printf("Tienes materias reprobadas\n"); obtenible = 0;
        if (reprobadas <= 2) { printf("Puedes reinscribirte\n"); }
        else if (reprobadas > 3) { printf("Estas en situacion critica\n"); }
    }
    if (obtenible) { printf("Puedes obtener beca\n\n"); }
    else { printf("No puedes obtener beca\n\n"); }
}

void Evaluar_Numero() {
    int num;
    printf("Ingrese un numero: ");
    scanf("%d", &num);
    if (num % 2 == 0) { printf("Es Par\n"); } else { printf("Es Impar\n"); }
    if (esPrimo(num)) { printf("Es Primo\n"); }
    printf("\n");
}

int main() {
    int selec_programa, a = 1;
    while (a) {
        Mostrar_Menu();
        scanf("%d", &selec_programa);
        printf("\n");
        switch(selec_programa) {
            case 1: Evaluar_Edad(); break;
            case 2: Aplicable_Beca(); break;
            case 3: Validar_Beca(); break;
            case 4: Evaluar_Numero(); break;
            default: a = 0; break;
        }
    }
    return 0;
}
    return 0;
}
