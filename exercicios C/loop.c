#include <stdio.h>

int main ()
{
    int i=1;
    int n=4;

    while(i <= 10) //nao se usa ; depois
    {
        printf("%d\n", i);
        i++;
    }
    
    do //obrigatoriamente executa o programa pelo menos uma vez
    {
        printf("%d\n", n);
        n+=4;
    } while(n<20); //se usa com ; depois quando usado com do
    
}