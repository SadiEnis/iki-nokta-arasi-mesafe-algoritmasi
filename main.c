#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x1,x2,y1,y2;
    float mesafe;

    printf("x1: ");
    scanf("%d", &x1);
    printf("y1: ");
    scanf("%d", &y1);
    printf("x2: ");
    scanf("%d", &x2);
    printf("y2: ");
    scanf("%d", &y2);

    mesafe = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));

    printf("Iki nokta arasi mesafe: %.2f", sqrt(mesafe)); // sqrt fonksiyonu karekök almayı sağlar.

    return 0;
}
