#include <stdlib.h>
#include <stdio.h>
int main(void)
{
    int var1, var2;
    scanf("%d %d", &var1, &var2);
    if (var1 < 0)
        var1 = -var1;
    else if (var1 == 1)
        var1++;
    int i, o = 0, p = 0, q = 0;
    if (var1 >= 1 && var1 < var2 && var2 <= 500)
    {
        for (; var1 < var2; var1++)
        {
            for (i = 2; i < var1; i++)
            {
                if (var1 % i == 0)
                    o++;
            }
            if (o == 0)
            {
                p += var1;
                q++;
            }
            o = 0;
        }
        printf("%d %d", q, p);
    }
    system("pause");
    return 0;
}