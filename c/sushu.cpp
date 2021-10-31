#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int m, n, k = 0, l = 0, j = 0;
    scanf("%d %d", &m, &n);
    if (m >=1 && m <= n && n <= 500)
    {
        if(m=1){
            m++;
        }
        for (; m <= n; m++)
        {
            for (int i = 2; i < m; i++)
            {
                if (m % i == 0)
                    k++;
            }
            if (k == 0)
                j++, l += m;
            k = 0;
        }
        printf("%d %d", j, l);
    }
    system("pause");
    return 0;
}