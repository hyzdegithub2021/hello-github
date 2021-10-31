#include <stdlib.h>
#include<stdio.h>
int main(void){
    int a,n=0,k=0;
    scanf("%d",&a);
    while(a){
        n+=a%10;
        k++;
        a/=10;
    }
    printf("%d %d",k,n);
    system("pause");
    return 0;
}