#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int nombre_a_trouver = rand() % 100 + 1;
    int proposition = 0;
    int essais = 0;

    printf("Devine le nombre entre 1 et 100 !\n");

	while (proposition != nombre_a_trouver)
    {
        printf("donne moi un numéro : ");
        scanf("%d", &proposition);
        essais++;

        if (proposition < nombre_a_trouver)
        {
            printf("C'est plus la famille !\n");
        }
        else if (proposition > nombre_a_trouver)
        {
            printf("C'est moins le sang !\n");
        }
        else
        {
            printf("Bien joué, tu as gagné en %d fois !\n", essais);
        }
    }

    return 0;
}
