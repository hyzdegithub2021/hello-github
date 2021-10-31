#include<stdio.h>
//#include<math.h>
#include <stdlib.h>
int main()
{
	int i, j, k, n, a, b = 1, sum = 0;
	int min = 1, max;
	scanf("%d",&n);
	//min = pow(10,n-1);
	for(i = 1; i < n; i++)//替代pow函数
	{
		min *= 10;
	}
	max = 10 * min;
	for(i = min; i < max; i++)
	{
		a = i;
		for(j = 1; j <= n; j++)
		{
			//sum += pow(a % 10, n);
			for(k = 1; k <= n; k++)//替代pow函数
			{b *= a % 10;}
			sum += b;
			a /= 10;
			b = 1;
		}
		if(sum == i)
		{printf("%d\n",i);}
		sum = 0;
	}
    system("pause");
	return 0;
 } 