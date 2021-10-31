#include <stdlib.h>
#include <stdio.h>
int main(void)
{
    int n, m, b = 0, i, v = 0, o;
    scanf("%d %d", &m, &n);
    for (; m <= n; m++)
    {
        for (i = 1; i < m; i++)
        {
            if (m % i == 0)
                b += i;
        }
        if (i == b)
        {
            printf("%d = 1", i), v++;
            for (o = 2; o < i; o++)
            {
                if (i % o == 0)
                {
                    printf(" + %d", o);
                }
            }
            printf("\n");
        }
        b = 0;
    }
    if (v == 0)
    {
        printf("None");
    }
    system("pause");
    return 0;
}