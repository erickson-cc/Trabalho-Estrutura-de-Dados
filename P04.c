#include <stdio.h>

int main()
{
    int i;
    int pos;
    int neg;
    int num;
    
    for(i=0;i<4;i++){
        printf("Informe um número\n");
        scanf("%d", &num);
        if(num>=0){pos++;}
        else{neg++;}
        }
    
    printf("A quantidade de números positivos foi %d\nA quantidade de números de negativos foi %d",pos,neg);

    return 0;
}
