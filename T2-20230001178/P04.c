/******************************************************************************
4. ⊘ Construa um programa que simule uma calculadora simples. Primeiro é solicit
ada a operação desejada +, -, / ou *, em seguida os dois operandos. Como resultad
o, o programa mostra o resultado da operação. O Programa é finalizado quando a op
eração desejada for igual à @. 

*******************************************************************************/

#include <stdio.h>

int main()
{
    char opp;
    double num1;
    double num2;
    double res;
    
    printf("Informe a operação desejada: \'+, -, / ou *\':\n");
    printf("Digite \'@\' para encerrar a calculadora\n");
    scanf("%c", &opp);
    if(opp=='@'){
        return 0;
    }
    printf("Informe o operando 1: ");
    scanf("%lf", &num1);
    printf("Informe o operando 2: ");
    scanf("%lf", &num2);
    
    if(opp=='+'){
        res = num1+num2;
    }
    if(opp=='-'){
        res = num1-num2;
    }
    if(opp=='/'){
        res = num1/num2;
    }
    if(opp=='*'){
        res = num1*num2;
    }
    printf("%.2f",res);
    return 0;
}
