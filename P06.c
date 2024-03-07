/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int idd;
    int stage;//1-não pode 2-facultativo 3- obrigatório
    
    printf("Informe a idade do eleitor\n");
    scanf("%d", &idd);
    
    if(idd>=0){
        stage=1; 
        if(idd>=16){stage+=1;}
        if(idd>=18){stage+=1;}
        if(idd>70){stage-=1;}
        
        if(stage==1){
            printf("Não pode Votar");
        }
        if(stage==2){
            printf("Voto Facultativo");
        }
        if(stage==3){
            printf("Voto Obrigatório");
        }
    }
        
    

    return 0;
}
