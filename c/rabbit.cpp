#include <stdlib.h>
#include <stdio.h>
int main(void)
{
    int var, var1 = 1, add = 2, sum = 0, var2 = 1;
    scanf("%d", &var);
    if (var == 1)
        printf("1");
    else
    {
        while (sum < var)
        {
            add++;
            sum = var1 + var2;
            var1 = var2;
            var2 = sum;
        }
        printf("%d", add);
    }
    // int var, sum=1,var1=0,add=1;
    // scanf("%d",&var);
    // while(sum<var)
    // {
    //     add++;
        
    //     sum=sum+var1;
    // }
    // printf("%d",add);
    system("pause");
    return 0;
}