#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	double e,item;
	int i, j, n;

	printf("Enter n: ");
	scanf("%d", &n);
	e = 1;
	item = 1;
	for(i = 1; i <= n; i++) {
        item=1;                   
		for(j = 1; j <= i; j++)
			item = item * j;      
		e = e + 1.0 / item;      
	}
	printf("e = %.4f\n", e);     
	system("pause");
	return 0;
}
