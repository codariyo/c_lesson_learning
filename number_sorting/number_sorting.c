#include<stdio.h>
// say� s�ralama uygulamas�


int main()
{
  int num1,num2,num3;

  printf("lutfen 3 tane tam sayi giriniz:\n");
  scanf("%d %d %d",&num1,&num2,&num3);

  if(num1>num2 && num1>num3)
    printf("en buyuk sayi: %d",num1);

  else if(num2>num1 && num2>num3)
    printf("en buyuk sayi: %d",num2);

  else printf("en buyuk sayi: %d",num3);

    return 0;
}
