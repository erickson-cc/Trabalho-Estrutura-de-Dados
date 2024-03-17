/******************************************************************************
9. ⊘ Fazer um programa que simule um campeonato com 4 times (A, B, C e D). S
era pedido o nome do primeiro time com os gols marcados e o nome do segundo time
com os gols marcados. Este processo se repetirá até que seja informado um valor 
diferente de A, B, C ou D para o primeiro time. Ao final deverá ser apresentado 
o número de pontos de cada time e o campeão. Caso houver empate na primeira 
colocação informar que não houve campeão. Cálculo dos pontos: vitória 3 pontos,
empate 1 ponto e derrota 0 ponto. Exemplo: 

Time: A 
Gols: 2 
Time: B 
Gols: 1 
Time: C 
Gols: 2 
Time: A 
Gols: 4 
Time: X ← valor diferente de A, B, C ou D, então finaliza 
Campeão: A 
A: 6 pontos 
B: 0 pontos 
C: 0 pontos 
D: 0 pontos 


*******************************************************************************/
#include <stdio.h>

int main()
{
    /**PONTOS**/
    int A_pts;
    int B_pts;
    int C_pts;
    int D_pts;
    
    char time_x;// Time X que vai disputar contra o time Y
    char time_y;//
    
    while(1=1/*time_x!= 'A' && time_x!= 'B' && time_x!= 'C' && time_x!= 'D'*/){
        printf("Informe o nome do Primeiro Time: ");
        scanf("%c",&time_x);
        if(time_x == 'A'){
            
        }
        printf("Informe o Número de Gols do Primeiro time: ");
        scanf
        
        printf("Informe o nome do Segundo Time: ");
        scanf("%c",&time_y);
    }
    
    return 0;
}
