#include <stdio.h>
#include <stdlib.h>
int main(void){
    int a,b=0;
    for(;;){
        scanf("%d",&a);
        if(a%2==1) b=a+b;
        if(a<=0) break;
    }
    printf("%d",b);
    system("pause");
    return 0;
}