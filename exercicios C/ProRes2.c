#include<stdio.h>

int main()
{

float salarioMinimo;
float salarioPessoa;
float quantSalario;

printf("Qual o seu salario:");
scanf("%f", &salarioPessoa);

salarioMinimo=740;
quantSalario=salarioPessoa/salarioMinimo;

printf("O seu salario corresponde a %.2f salario(s) minimo(s).\n", quantSalario);


}