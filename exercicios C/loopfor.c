// for (<inicializacao>; <condicao>; <incremento/decremento>;)  (for compara e reinicia)
//     {
//    <bloco de comandos>
//     }

#include<stdio.h>

int main()
{
    int i;
    int n;

    for (i = 1; i <=10; i++)
    {
        printf("%d\n", i);
    

    if(i==8) // fica dentro das {} do for
    {
        break; //interrompe apos o if ser condicionado(dentro do laco de repeticao nada acontece abaixo)
    }
    }


    for (n = 0; n <=16; n+=2)
    {
        if(n==8) // fica dentro das {} do for
    {
        continue; //pula a condicionante
    }
        printf("%d\n", n);
    }

}