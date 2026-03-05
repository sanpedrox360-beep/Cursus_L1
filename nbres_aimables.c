#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int n, p, i;
    printf("Saisir n : ");
    scanf("%d", &n);
    printf("Saisir p : ");
    scanf("%d", &p);

    int somme_n = 0, somme_p = 0;
    ;
    for (i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
            somme_n += i;
    }

    for (i = 1; i <= p / 2; i++)
    {
        if (p % i == 0)
            somme_p += i;
    }

    if ((somme_n == p) && (somme_p == n))
        printf("%d et %d sont aimables.\n", n, p);
    else
        printf("%d et %d ne sont pas aimables.\n", n, p);
}