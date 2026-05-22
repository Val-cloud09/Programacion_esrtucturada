#include <stdio.h>
#include <string.h>

int main()
{
    char jugadores[3][20];

    for (int i = 0; i < 3; i++)
    {
        printf("Ingrese el nombre del jugador %d: ", i + 1);
        fgets(jugadores[i], sizeof(jugadores[i]), stdin);

    }

    printf("\nLista de jugadores:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Jugador %d: %s\n", i + 1, jugadores[i]);
    }

    return 0;
}
