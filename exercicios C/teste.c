#include<stdio.h>

 int main () 
 {
   int idP, idJ;

   printf("Qual a idade de Pedro?\n");
   scanf("%d", &idP);
   printf("Qual a idade de Joana?\n");
   scanf("%d", &idJ);

   if (idP<idJ)
   {
    printf("Joana e mais velha que Pedro\n");
   }
    else if (idP>idJ)
    {
    printf("Pedro e mais velho que Joana\n");
    }
    else //sempre o ultimo sem ()
    printf("Joana e pedro possuem a mesma idade\n");

 }
   