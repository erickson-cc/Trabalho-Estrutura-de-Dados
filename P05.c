/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int pos;
    int top;
    
    printf("Informe a Posição do Competidor\n");
    scanf("%d", &pos);
    
    if(pos<=100){
        if(pos>0){
            top=5; // Igualando
            if(pos>5){top+=5;}// Adicionando
            if(pos>10){top+=10;}// "" "" ""
            if(pos>20){top+=10;}// "" "" ""
            if(pos>30){top=100;}// Igualando
        
        printf("O Competidor está na classe: Top %d", top);    
        }
        
    }

    return 0;
}
