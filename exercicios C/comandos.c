#include <stdio.h>

int main ()
{
    printf("Oi, tudo bem?\n");

    printf("Valor inteiro?: %d.\n", 10); //%d para numeros inteiros
    printf("Valor real?: %f.\n", 3.14159265); //%f para numeros inteiros com casas decimais
    printf("Valor real com apenas duas casas?: %.2f.\n", 3.14159265); //%.2f quantidade de casas decimais
    printf("dado de texto: %c.\n", 'a'); //%c caracteries
    printf("Dado de texto: %s.\n\n", "testando"); //%s para strings, textos longos

    //incrementos
    int dado =10; //SEMPRE COMECAR DECLARANDO A VARIAVEL
    printf("Dado antes do incremento: %d.\n", dado);

    dado++;
    printf("Dado depois do incremento: %d.\n", dado);

    dado--;
    printf("Dado depois do decremento: %d.\n", dado);

    dado+=3;
    printf("Dado depois do incremento em 3 unidades: %d.\n", dado);

    dado-=2;
    printf("Dado depois do decremento em 2 unidades: %d.\n", dado);

    dado*=10;
    printf("Dado depois do incremento multiplicado por 10: %d.\n\n", dado);


    float m;
    printf("insira a nota: \n");
    scanf("%f", &m); //lembrar de usar o & antes da variante

    if(m>=7) //nao se usa ; depois
    {
        printf("aprovado(a)!\n");
    }
    else //else so existe com if, sempre o oposto de if e sempre vem depois
    {
        printf("reprovado(a)\n");
    }
    if(m<7&&m>=4) // && = conjuncao e
    {
        printf("aluno tem direito a exame final\n");
    }
    if(m<4) 
    {
        printf("sem direito a recurso\n");
    }
}

