#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void){
    int a,n;
    double sum=0,s=0;
    scanf("%d %d",&a,&n);
    for(int i=0;i<n;i++){
        s=pow(10,i)*a+s;
        sum=sum+s;
    }
    printf("s = %.0lf",sum);
    system("pause");
    return 0;
}