
#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
  float X1,X2,Y1,Y2,diffX,diffY,distance;
  printf("Enter X1:");
  scanf("%f",&X1);
  printf("\n Enter X2:");
  scanf("%f",&X2);
  printf("\n Enter Y1:");
  scanf("%f",&Y1);
  printf("\n Enter Y2:");
  scanf("%f",&Y2);
  diffX=X2 - X1;
  diffY=Y2 - Y1;

  diffX=pow(diffX,2);
  diffY=pow(diffY,2);
  distance=diffX + diffY;
  distance=sqrt(distance);
  printf("%f",distance);






  return 0;
}
