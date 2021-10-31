#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int var,sum=0;
    for(;;)
    {
        scanf("%d",&var);
        if(var==0||var<0)
            break;
        if(var%2==1)
            sum+=var;
    }
    printf("%d",sum);
    system("pause");
    return 0;
}