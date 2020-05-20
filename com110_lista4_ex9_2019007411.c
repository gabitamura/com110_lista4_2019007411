#include<stdio.h>

int main()
{
  float i=1,j=1 ;
  char continuar;

  for(i=1; i<=7; i++)
  {
    for(j=1; j<=20; j++)
    {
      if(i==1 || i==7){
        printf("#");
      }else if(i==4){
        if(j==1 || j==20){
          printf("#");
        }else{
          printf("  SEJA BEM-VINDO  ");
          j = 19;
        }
      }else{
        if(j==1 || j==20){
          printf("#");
        }else{
          printf(" ");
        }
      }
    }
    printf("\n");
  }
  return 0;
}
