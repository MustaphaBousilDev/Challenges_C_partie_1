#include <stdio.h>
#include <string.h>


int main(){
  char numbers[3];
  char i,l,zero;
  char numbers_reverse[3];
  scanf("%s",&numbers);
  zero=numbers[0];
  printf("%c",zero);
  l=strlen(numbers);
  l=numbers[l - 1];
  //printf("%c",l);
  numbers_reverse[0]=l;
  numbers_reverse[1]=numbers[1];
  numbers_reverse[2]=zero;
  //printf("%c",numbers_reverse[2]);
  printf("%c", *numbers_reverse);     // Output: H
  printf("%c", *(numbers_reverse+1));   // Output: a
  printf("%c", *(numbers_reverse+2));   // Output: o

  return 0;

}
