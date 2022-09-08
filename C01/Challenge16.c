#include <stdio.h>
#include <string.h>
int main(){

  int ent_octa,ent_hexa,m_octal,m_hexsa,entier;
  int octa[10];
  int hexa[10];
  int count_octa=0;
  int count_hexa=0;
  printf(" Enter Nulber Entiere :");
  scanf("%d",&entier);
  ent_octa=entier;
  ent_hexa=entier;
  for(int i=0;i<4;i++){
    if(ent_octa>0){
        m_octal=ent_octa%8;
        ent_octa=ent_octa/8;
        octa[i]=m_octal;
        count_octa++;
        //printf("\n %d",one[i]);
    }else{break;}

  }

  for(int i=0;i<5;i++){
    if(ent_hexa >0){
        m_hexsa=ent_hexa%16;
        ent_hexa=ent_hexa/16;
        hexa[i]=m_hexsa;
        count_hexa++;
        //printf("\n %d",one[i]);
    }else{break;}
  }
  //printf("%d",count_hexa);
   printf("Hexadecimal:");
   for(int i=count_hexa -1 ;i>=0;i--){
    if(hexa[i]==14){printf("E");}else if(hexa[i]==10){printf("A");}
    else if(hexa[i]==11){printf("B");}
    else if(hexa[i]==12){printf("C");}
    else if(hexa[i]==13){printf("D");}
    else{printf("%d",hexa[i]);}
  }

   printf("\n Octal:");
   for(int i=count_octa -1 ;i>=0;i--){
       printf("%d",octa[i]);
  }





  return 0;
}
