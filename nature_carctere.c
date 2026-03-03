#include <stdio.h>

int main(void)
{
    char ch;
    printf("Saisissez le carctère : ");
    ch = getchar();
    if (ch >= 'a' && ch <= 'z')
        printf("%c est un alphabet.", ch);
    else if (ch >= '0' && ch <= '9')
        printf("%c est un chiffre.", ch);
    else
        printf("%c est un symbole.", ch);

    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;

    getchar();
}