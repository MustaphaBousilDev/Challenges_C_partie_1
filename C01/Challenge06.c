#include <stdio.h>
#include <string.h>
int main(){
 const float indice=1.8;
 float F,C;
 printf("Ecrire Temperateur unité (F):");
 scanf("%f",&F);
 C=(F - 32)/indice;
 printf("\n C = %.2f",C);


 return 0;
}
