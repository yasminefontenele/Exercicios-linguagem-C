#include<stdio.h>

int main()
{
 /* A versao abaixo nao pode ser usada pq so com string depois de digitar
    espaco o programa para de ler
    char nome[30];
    printf("Qual o nome? \n");
    scanf("%s", nome); //char nao precisa do & antes da variavel

    printf("o nome informado: %s\n", nome);*/



    char nome[30]; //char pq uma string e uma sequencia de caracteries/ [n] precisa ter  

    printf("Informe seu nome: ");
    fgets(nome, sizeof(nome), stdin);  /*para ler a string*/

    
    printf("Nome Digitado: ");
    puts(nome);    /*mostra a string*/ 


   

}