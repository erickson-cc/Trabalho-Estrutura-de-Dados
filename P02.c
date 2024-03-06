#include <stdio.h>

int main()
{   
    //ENTRADA
    int val;
    int pag;
    float pre;
    
    printf("Informe o Preço do produto \n");
    scanf("%d", &val);
    
    printf("Informe o método de pagamento:\n1 - À Vista\n2 - À prazo\n");
    scanf("%d", &pag);
    
    //PROCESSAMENTO
    if(pag==1)
        {pre=val*0.95;}
    else{
        if(pag==2){pre=val*1.10;}
    else{printf("Rode o programa novamente e informe o método de pagamento correto.\n");}}
    
    //SAÍDA
    printf("Preço do produto:$%.2f", pre);
    
    return 0;
    }
