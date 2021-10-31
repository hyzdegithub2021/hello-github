#include <stdlib.h>
#include <stdio.h>
int main(void)
{
    int var1,var5=0;
    scanf("%d",&var1);
    for(int var2=var1/5;var2>0;var2--)
    {
        for(int var3=(var1-var2*5)/2;var3>0;var3--)
        {
            for(int var4=(var1-var2*5-var3*2)/1;var4<=var1-5-2;var4++)
            {
                if(var2*5+var3*2+var4*1==var1&&var4!=0)
                {
                    printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n",var2,var3,var4,var2+var3+var4);
                    var5++;
                } 
            }
        }
    }
    printf("count = %d",var5);
    system("pause");
    return 0;
}