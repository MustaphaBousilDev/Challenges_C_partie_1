#include <stdio.h>
#include <string.h>
int main(){
 const float indice=1.8;
 float F,C;
 printf("Ecrire Temperateur unité (C):");
 scanf("%f",&C);
  F = (C*indice)+32;
 printf("\n F = %.2f",F);


 return 0;
}
