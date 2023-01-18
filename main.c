#include <stdio.h>
#include <stdlib.h>
int main(void)
{
 int code;
 printf("----------------------------------------------------------\n");
 printf(" INTERPRETADOR DE CODIGO 0.0 \n");
 printf("-----------------------------------------------------------\n");
 printf("\n qual o codigo do produto: ");
 scanf("%d",&code);
 
 if ( code == 1 )
 {
  printf("\n-----------------------------------------\n");
  printf(" ALIMENTO NAO PERECIVEL\n");
  printf("--------------------------------------------\n\n");

 }
 else if ( code == 2 || code == 3 || code == 4)
 {
 printf("\n----------------------------------\n");
 printf(" ALIMENTO PERECIVEL\n");
 printf("-------------------------------------\n\n");
 }
 else if (code == 5 || code == 6)
 {
 printf("\n-----------------\n");
 printf(" VESTUARIO\n");
 printf("-----------------\n\n");
 }
 else if (code >= 7 && code <= 12)
 {
 printf("\n-----------------\n");
 printf(" LIMPEZA\n");
 printf("-----------------\n\n");
 }

else
{
 printf("\n--------------------------\n");
 printf(" OPCAO INVALIDA \n");
 printf("----------------------------\n\n");
}

 
 system("pause");

} 
