#include <stdio.h>
#include <string.h>
int main(){
 const float indice=1.8;
 float F,C;
 char statess[10];
 printf("Ecrire Temperateur unité (F):");
 scanf("%f",&F);
 C=(F - 32)/indice;
 printf("\n C = %.2f",C);
 if(C < 0){
    printf("\n tres froid\n");
 }else if(C >=0 && C <24){
    printf("\n froid\n");
  }
  else if(C >=24 && C <35){
    printf("\n chaud");
  }
  else{
    printf("\n tres chaud");
  }


 return 0;
}

