#include <stdio.h>
int main(void)
{
    double x, y;
     
    printf("%lf", x);
    scanf("%lf", x);
    if(x != 0)
    {
        y=1/x 
    }else
    {
        y=0;
    }

    printf("f(%.lf)=%.lf\n", x, y);

    return 0;
}