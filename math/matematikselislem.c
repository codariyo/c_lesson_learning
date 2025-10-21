#include<stdio.h>

int main()
{
// matematiksel olarak 4 iþlem yapan program
  float say1,say2;
  char operato1;
  printf("lutfen bir sayi giriniz:");
  scanf("%f",&say1);

  printf("lutfen bir operator giriniz:");
  scanf(" %c",&operato1);

  printf("lutfen bir sayi giriniz:");
  scanf("%f",&say2);

  if(operato1 == '+')
    printf("sonuc: %f",say1+say2);
  if(operato1 == '-')
    printf("sonuc: %f",say1-say2);
  if(operato1 == '/')
    printf("sonuc: %f",say1/say2);
  if(operato1 == '*')
    printf("sonuc: %f",say1*say2);

  return 0;
}
