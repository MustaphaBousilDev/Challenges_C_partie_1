#include <stdio.h>
#include <string.h>

int main(){

   float m,mile;
   const float indice=1.609;
   printf("Enter Distance in m :");
   scanf("%f",&m);
   mile=(m*indice)/1000;
   printf("Distance in mile: %f",mile);




  return 0;
}
