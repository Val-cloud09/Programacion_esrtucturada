#include <stdio.h>
#include <string.h>

int main()
{
    char jugadores[3][20];
    int longitud;

    for (int i = 0; i < 3; i++)
        {
        printf("Ingrese el nombre del jugador %d: ", i + 1);
        fgets(jugadores[i], sizeof(jugadores[i]), stdin);

        }

    printf("\nLista de jugadores:\n");

    for (int i = 0; i < 3; i++)
        {
        longitud = strlen(jugadores[i]);
        printf("Jugador %d: %s | Longitud: %d\n", i + 1, jugadores[i], longitud);
        }

    return 0;
}
