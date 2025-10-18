/*
#include<stdio.h>
#include<math.h>

int main(){

 int x,gunsayisi;
 double toplam;

 toplam=0;
 x=0;
 gunsayisi=0;

 printf("bir sayi girin:");
 scanf("%d",&x);

 printf("bir gun sayisi girin:");
 scanf("%d",&gunsayisi);

 toplam=x*pow(1.025,gunsayisi);
 printf("%d",toplam);

 return 0;
} */
#include <stdio.h>
#include <math.h>

 int main() {
    double x;             // double kullanmak daha iyi
    int gunsayisi;
    double toplam;

    printf("Bir sayi girin: ");
    scanf("%lf", &x);     // double için %lf kullanýlýr

    printf("Bir gun sayisi girin: ");
    scanf("%d", &gunsayisi);

    toplam = x * pow(1.025, gunsayisi);

    printf("%d gun sonraki toplam: %.2f\n", gunsayisi, toplam);

    return 0;
}
