#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
    int a, b, c, disc;
    float x_1, x_2, x_0, rac_disc;
    printf("a =  ");
    scanf("%d", &a);
    printf("b =  ");
    scanf("%d", &b);
    printf("c =  ");
    scanf("%d", &c);
    disc = pow(b, 2) - (4 * a * c);
    rac_disc = sqrt(disc);
    x_0 = (-b) / (2.0 * a);
    x_1 = (-b + rac_disc) / (2.0 * a);
    x_2 = (-b - rac_disc) / (2.0 * a);
    if (disc > 0)
        printf("X1 = %.2f \n X2 = %.2f", x_1, x_2);
    else if (disc == 0)
        printf("X0 = %.2f", x_0);
    else
    {
        float x_reel, x_im;
        rac_disc = sqrt(-disc);
        x_reel = (-b) / (2.0 * a);
        x_im = rac_disc / (2.0 * a);

        printf("X1 = %.2f + i%.2f\n", x_reel, x_im);
        printf("X1 = %.2f - i%.2f", x_reel, x_im);
    }

    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF)
        ;
    getchar();
}
