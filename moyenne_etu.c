#include <stdio.h>
#include <stdlib.h>
#define NB_ETUDIANTS 2
#define NB_MATIERES 2

int main(void)
{
    double notes[NB_ETUDIANTS][NB_MATIERES] = {0, 0};
    double moyennes[NB_ETUDIANTS] = {0};
    double somme;

    for (int i = 0; i < NB_ETUDIANTS; i++)
    {
        printf("Saisie des notes de l'etudiant %d\n", i + 1);
        for (int j = 0; j < NB_MATIERES; j++)
        {
            printf("Note %d : \n", j + 1);
            scanf("%lf", &notes[i][j]);
            if ((notes[i][j] < 0) || (notes[i][j] > 20))
                printf("Saisie Invalide\n");
            while ((notes[i][j] < 0) || (notes[i][j] > 20))
            {
                scanf("%lf", &notes[i][j]);
            }
        }
    }
    for (int i = 0; i < NB_ETUDIANTS; i++)
    {
        somme = 0;
        for (int j = 0; j < NB_MATIERES; j++)
        {
            somme += notes[i][j];
        }
        moyennes[i] = somme / NB_MATIERES;
    }

    int etu_sup_10 = 0;
    double min, max;
    min = moyennes[0];
    max = moyennes[0];

    for (int i = 0; i < NB_ETUDIANTS; i++)
    {
        printf("Notes de l'etudiant %d : ", i + 1);
        for (int j = 0; j < NB_MATIERES; j++)
            printf("%.2lf ", notes[i][j]);

        if (min > moyennes[i])
            min = moyennes[i];

        if (max < moyennes[i])
            max = moyennes[i];

        if (moyennes[i] >= 10)
            etu_sup_10 += 1;
        printf("\nMoyenne de l'étudiant %d : ", i + 1);
        printf("%.2lf\n", moyennes[i]);
    }

    double somme_moy = 0;
    double moy_generale = 0;

    for (int i = 0; i < NB_ETUDIANTS; i++)
    {
        somme_moy += moyennes[i];
    }
    moy_generale = somme_moy / NB_ETUDIANTS;
    printf("La moyenne générale de ces étudiants est : %.2lf\n", moy_generale);
    printf("Le nombre d'etudiants qui ont une moyenne >= 10 est : %d\n", etu_sup_10);
    printf("La moyenne la plus forte est : %.2lf\n", max);
    printf("La moyenne la plus faible est : %.2lf\n", min);
}