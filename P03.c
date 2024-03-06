#include <stdio.h>

int main()
{   
    //ENTRADA
    int ini;
    int fim;
    int dur;
    
    printf("Informe o início do evento\n");
    scanf("%d", &ini);
    
    printf("Informe o término do evento\n");
    scanf("%d", &fim);
    
    //PROCESSAMENTO
    if(fim>ini){
        dur = fim-ini;
        }
    else{
        dur = fim-ini+24;
        }
    
    //SAÍDA
    if(fim <= 23){///////////////////////
        if(fim >= 0){/////////CONDIÇÕES//
            if(ini <= 23){///////////////
                if(ini >= 0){////////////
            
    printf("Duração do evento: %d horas.\n", dur); }}}}
        else{
    printf("As Horas devem ser entre 0 e 23");
        }
                    
    
    return 0;
    }
