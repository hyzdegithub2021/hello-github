#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a, b, c, d, e = 0, f = 0;
    scanf("%d", &a);
    if (a > 8 && a < 100)
    {
        for (b = a / 5; b > 0; b--)
        {
            for (c = (a - b * 5) / 2; c > 0; c--)
            {
                d = (a - b * 5 - c * 2) / 1;
                if (d != 0)
                {
                    f = b + c + d;
                    printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n", b, c, d, f);
                    e++;
                }
            }
        }
        printf("count = %d", e);
    }
    system("pause");
    return 0;
}