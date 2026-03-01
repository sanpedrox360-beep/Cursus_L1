#include <stdio.h>
#include <stdlib.h>
int main()
{
    int mois;
    printf("Entrez la valeur du mois : ");
    scanf("%d", &mois);
    switch (mois)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("31 jours");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("30 jours");
        break;
    case 2:
        printf("Entrez l'année : ");
        int annee;
        scanf("%d", &annee);
        if ((annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0))
        {
            printf("29 jours");
        }
        else
        {
            printf("28 jours");
        }

        break;
    default:
        printf("Mois invalide");
    }

    return 0;
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;

    getchar();
}