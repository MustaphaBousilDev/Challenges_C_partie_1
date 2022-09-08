#include <stdio.h>
#include <string.h>

int main(){

   float m,mile;
   const float indice=1.609;
   printf("Enter Distance in mile :");
   scanf("%f",&mile);
   m=(mile)/(indice**1000);
   printf("Distance in m: %f",m);




  return 0;
}
