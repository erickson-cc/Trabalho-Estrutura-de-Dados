#include <stdio.h>

int main()
{   
    int h;
    int n;
    int sal;
    
    printf("Digite o número de horas trabalhadas\n");
    scanf("%d", &h);

    printf("Digite o valor da hora trabalhada\n");
    scanf("%d", &n);
    
    if(h<=200) {sal = h*n;}
    else {sal = h*n*1.05;}
    
    printf("O salário desse funcionário é: $%d", sal);
    
    return 0;
}
