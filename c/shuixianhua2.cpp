#include <stdlib.h>
#include <stdio.h>
//#include <math.h>
int main(void)
{
    int var4,var6=0,var3=0,var5=0,var1,var2=1,var7;
    scanf("%d",&var1);
    for(int i=1;i<var1;i++)
    {
        var2=var2*10;
    }
    for(;var2<=var2*10;var2++)
    {
        var4=var2;
        for(var3=var1;var3>0;var3--)
        {
            var5=var4%10;
            //var6+=pow(var5,var1);
            var7=var5;
            for(int k=1;k<var1;k++)
            {
                var7*=var5;
            }
            var6+=var7;
            var4/=10;
        }
        if(var6==var2)
            printf("%d\n",var6);
        var6=0;
    }
    system("pause");
    return 0;
}