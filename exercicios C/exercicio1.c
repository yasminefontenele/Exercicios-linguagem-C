//Faça um programa que calcule o desconto de uma compra efetuada obedecendo os seguintes percentuais:
//10% de desconto se a compra for menor ou igual que R$2.000,00;
//5% de desconto se a compra for maior que R$ 2.000,00 e menor ou igual a R$ 3.000,00;
//3% de desconto se for maior que R$ 3.000,00 e menor ou igual a R$ 5.000,00;
//2% de desconto para compras acima de R$ 5.000,00. 
//O programa deverá exibir o desconto e o total a pagar.


#include<stdio.h>

int main()
{    
float compras, desconto, taxa, tpagar;

printf("Valor total da compra:\n");
scanf("%f", &compras);

if(compras <= 2000)  
{ 
    taxa=0.1; 
} 
else  
{
    if(compras <= 3000)
        {taxa=0.05;}
    
    else 
    {
        if(compras <= 5000)
        {taxa=0.03;}

        else 
        { taxa=0.02;}
    }
}

desconto = compras * taxa;
tpagar = compras - desconto;
printf("O seu desconto foi de %.2f e voce ira pagar %.2f reais.\n", desconto, tpagar);
}