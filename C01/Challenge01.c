#include <stdio.h>
#include <string.h>
int main(){
  char  Nom[20],prenom[20],Sex[10];
  int Age,numero;

  //Last Name
  printf(" What is Your Last Name:");
  scanf("%s",&Nom);
  //First Name
  printf("\n What is Your First Name:");
  scanf("%s",&prenom);

  //Age
  printf("\n How old are You:");
  scanf("%d",&Age);
  //Phone
  printf("\n Your Phone:");
  scanf("%d",&numero);
  //Sex
  printf("\n sex(H or F):");
  scanf("%s",&Sex);

  //Output


  printf("\n First Name : %s",prenom);
  printf("\n Age : %d", Age);
  printf("\n Phone Nulber : %d", numero);
  printf("\n Name : %d",Sex);






  return 0;
}
