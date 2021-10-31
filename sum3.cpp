#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    // int var1, var2, var3, var4, var5,var6;
    // scanf("%d %d", &var1, &var2);
    // var6=var1>var2?var1:var2;
    // for (int i = 1; i < var6; i++)
    // {
    //     if (var1 % i==0)
    //         var3 = i;
    //     if (var2 % i == 0)
    //         var4 = i;
    //     if (var3 == var4)
    //         var5 = var3;
    // }
    // int result;
    // result = var1*var2/var5;
    // printf("%d %d", var5,result);
    int var1,var2,var4;
    scanf("%d %d",&var1,&var2);
    int var3=var1>var2?var1:var2;
    for(int i=1;i<var3;i++)
    {
        if(var1%i==0&&var2%i==0)
            var4=i;
    }
    int result=var1*var2/var4;
    printf("%d %d",var4,result);
    system("pause");
    return 0;
}