#include <stdio.h>
#include <stdlib.h>
int main(void){
    int n,m;
    double c=0;
    scanf("%d %d",&m,&n);
    for(;m<=n;m++){
        c=m*m+1.0/m+c;
    }
    printf("%lf",c);
    system("pause");
    return 0;
}