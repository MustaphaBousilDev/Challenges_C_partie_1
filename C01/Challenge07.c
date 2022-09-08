#include <stdio.h>
#include <string.h>
int main(){
  int a,b;
  float m,d;
  printf(" Enter a:");
  scanf("%d",&a);
  printf("\n Enter b:");
  scanf("%d",&b);
  m=a%b;
  d=a/b;
  //output a + b
  printf(" a + b = %d",a+b);
  printf("\n a - b = %d",a-b);
  printf("\n a * b = %d",a*b);
  printf("\n a div b = %f",d);
  printf("\n a mod b = %f",m);

  return 0;


}
