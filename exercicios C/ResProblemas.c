#include<stdio.h>

int main()
{
    float segundos;
    float minutos;
    float horas;

    printf("Qual a duracao do evento?\n");
    scanf("%f", &segundos);

    minutos=segundos/60;
    horas=minutos/60;

    printf("O tempo correspondente foi de %.2f minutos ou %.2f horas.\n", minutos, horas);
    return 0;
}
