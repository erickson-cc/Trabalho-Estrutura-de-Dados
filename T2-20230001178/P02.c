/******************************************************************************
2. ⊙ Faça um programa que simule a multiplicação por meio de adições. Para tal s
erãoo pedidos os dois operandos. Por exemplo se for informado 3 e 4, deverá ser 
calculado, usando a soma, 3∗4, ou seja, 12. Este cálculo é feito somando o prime
iro valor informado por ele mesmo o número de vezes representada pelo segundo nú
mero. Nesse exemplo, o três seria somado quatro vezes: 3+3+3+3, resultando 12. 

*******************************************************************************/

#include <stdio.h>

int main()
{
    int val;
    int mul;
    int i;
    int res;
    
    printf("Informe o primeiro número: ");    
    scanf("%d", &val);
    
    printf("Informe o segundo número: ");
    scanf("%d", &mul);
    res = 0;
    for(i=1;i<=mul;i++){
        res=res+val;
        if(i==mul){printf("%d=%d", val,res);}
        else{printf("%d+", val);}
    }
    
    return 0;
}
