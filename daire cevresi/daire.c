#include <stdio.h>

 int main(void)
{
    int r,pi,cevre;
    pi=3;
    printf("Dairenin yaricapini giriniz: ");
    scanf("%d",&r);
    cevre = 2 * pi * r;
    printf("Dairenin cevresi: %d", cevre);

    return 0;
}