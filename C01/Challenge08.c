#include <stdio.h>
#include <string.h>
int main(){


  float a,b,c,d,somme,moyenne;
  printf("Enter Number a:");
  scanf("%f",&a);
  printf("\n Enter Number b:");
  scanf("%f",&b);
  printf("\n Enter Number c:");
  scanf("%f",&c);
  printf("\n Enter Number d:");
  scanf("%f",&d);
  somme=a+b+c+d;
  moyenne=somme/4;
  printf("Somme = %.1f",somme);
  printf("Moyenne= %.1f",moyenne);

  return 0;
}
