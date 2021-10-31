#include <stdlib.h>
#include <stdio.h>
int main(void)
{
    int var1,var2,sum=0,var3=0;
    scanf("%d %d",&var1,&var2);
    while(var2)
    {
        var3+=var1;
        sum+=var3;
        var1*=10;
        var2--;
    }
    printf("%d",sum);
    system("pause");
    return 0;
}