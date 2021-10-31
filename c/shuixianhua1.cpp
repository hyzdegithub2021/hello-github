#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main(void)
{
    double var1,var2,var3=0,var5=0,var6=0;
    int var4;
    scanf("%lf",&var1);
    for(var2=pow(10,var1-1);var2<=pow(10,var1)-1;var2++)
    {
        var3=var1;
        var4=var2;
        while (var3>0)
        {
            var5=var4%10;
            var6+=pow(var5,var1);
            var4/=10;
            var3--;
        }
        if(var6==var2)
            printf("%.0lf\n",var6);
        var6=0;
    }
    system("pause");
    return 0;
}