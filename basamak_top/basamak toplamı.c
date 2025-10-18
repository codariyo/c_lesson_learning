#include<stdio.h>

int main()
{
int sayi,toplam;

  printf("bir sayi giriniz:");
  scanf("%d",&sayi);

  while (sayi>0){
       toplam+=sayi%10;
       sayi=sayi/10;
     }
    printf("toplam: %d",toplam);
    return 0;
}
