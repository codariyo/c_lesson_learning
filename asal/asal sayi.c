#include<stdio.h>

int main(){
 int a,b,asal;

  for(a=2;a<=100;a++) {
      asal=1;
      for(b=2;b<=a/2;b++){
       if (a%b==0){
        asal=0;
        break;
       }

     }
if(asal==1)
    printf("%d ",a);
    }
  printf("\n ");

  return 0;
}
