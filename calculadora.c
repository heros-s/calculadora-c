#include <stdio.h>

int main()
{
    float num1; 
    float num2;
    float resultado;
    char operacao;
    

    printf("\ninsira um valor: ");
    scanf("%f", &num1);
    
    printf("\ninsira a operacao que deseja fazer\n'+, -, *, /': ");
    scanf(" %c", &operacao);

    printf("\ninsira outro valor: ");
    scanf("%f", &num2);

    if(operacao == '+')
    {
        resultado = num1 + num2;
    }
    else if(operacao == '-')
    {
        resultado = num1 - num2;
    }
    else if(operacao == '/')
    {
        resultado = num1 / num2;
    }
    else if(operacao == '*')
    {
        resultado = num1 * num2;
    }
    else
    {
        printf("\na operacao solicitada eh invalida.\n");
    }

    printf("\no resultado eh: %.2f\n", resultado);
    return 0;
}