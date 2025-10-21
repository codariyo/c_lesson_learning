#include<stdio.h>

// suyun sýcaklýk durumuna göre bulunduðu hali yazan progam


int main()
{
 int degree;

 printf("lutfen suyun derecesini giriniz:");
 scanf("%d",&degree);

 if(degree< -4)
    printf("Suyun bulundugu hal: Kati");
 else if(degree>-4 && degree<100)
    printf("Suyun bulundugu hal: Sivi");
 else
    printf("Suyun bulundugu hal: Buhar");

  return 0;
}
