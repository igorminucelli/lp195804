#include <stdio.h>

int main()
{
    int X,Y,menor,maior,Soma=0;
    
    scanf("%d %d",&X,&Y);
    
    if(X < Y){
        menor = X;
        maior = Y;
    }
    else{
        menor = Y;
        maior = X;
    }
    
    int i;
    for(i = menor+1; i < maior; i++){
        if( i % 2 != 0){
            Soma = Soma+i;
        }
        }
    printf("%d\n",Soma);
    return 0;
}
