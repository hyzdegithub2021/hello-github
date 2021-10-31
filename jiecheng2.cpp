#include <stdio.h>
#include <stdlib.h>
int main(void){
    int var,var1=1,var2=0;
    scanf("%d",&var);
    for(int i=1;i<=var;i++)
    {
        for(int k=1;k<=i;k++)
        {
            var1=k*var1;
        }
        var2+=var1;
        var1=1;
    }
    printf("%d",var2);
    system("pause");
    return 0;
}