#include <stdio.h>
int main()
{
    char ch;
    printf("Saisir la lettre : ");
    scanf("%c", &ch);
    if ((ch == 'a') || (ch == 'e') || (ch == 'u') || (ch == 'i') || (ch == 'o') || (ch == 'y'))
    {
        printf("%c est une voyelle\n", ch);
    }
    else if ((ch >= 'a' && ch <= 'z') && !(ch == 'a' || ch == 'e' || ch == 'u' || ch == 'i' || ch == 'o' || ch == 'y'))
    {

        printf("%c est une consonne ", ch);
    }
    else
    {
        printf("Erreur ");
    }

    return 0;
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;

    getchar();
}
