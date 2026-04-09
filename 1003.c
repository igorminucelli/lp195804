#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,MaiorAB,MaiorFinal;
    
    scanf("%d %d %d",&a,&b,&c);
    
    MaiorAB=(a+b+abs(a-b))/2;
    
    MaiorFinal=(MaiorAB+c+abs(MaiorAB-c))/2;
    
printf("%d eh o maior\n",MaiorFinal);

    return 0;
}
