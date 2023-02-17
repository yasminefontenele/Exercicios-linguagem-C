#include<stdio.h>

int main ()
{
    int v[5]={10, 20, 30, 40, 50}; //cada valor dentro dos {} representa um vetor 
    // a quantidade de vetores sempre inicia na posicao 0 e vai ate a posicao total -1
    int i; //variavel indice
    float s; //variavel soma

    for(i=0; i<5; i++)
    {
      s += v[i]; //aqui i esta representando as posicoes dos vetores e nao os valores
    }
    printf("resuldado: %f.\n\n", s/5);

    //

    int vet[3]; //quantidade de posicoes
    int n; //variavel

    for(n=0; n<3; n++) //condicionantes
    {
        printf("insira um dado:\n");
        scanf("%d", &vet[n]);
    }
    printf("Dados inseridos: \n");
    for(n=0; n<3; n++)
    {
        printf("%d\n", vet[n]);
    }
}