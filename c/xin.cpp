#include <stdio.h>
#include <stdlib.h>
int main(void){
    int a;
    scanf("%d",&a);
    while(a){
        printf("%d ",a%10);
        a/=10;
    }
    system("pause");
    return 0;
}