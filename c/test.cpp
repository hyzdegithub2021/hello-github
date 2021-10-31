#include <stdlib.h>
#include <stdio.h>
double fact(int n){
    double c=1;
    for(int i=1;i<=n;i++){
        c=c*i;
    }
    return c;
}
int main(void){
    int n,m;
    scanf("%d %d",&m,&n);
    printf("%lf",fact(n)/(fact(m)*fact(n-m)));
    system("pause");
    return 0;
}