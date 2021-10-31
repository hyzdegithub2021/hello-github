#include <stdlib.h>
#include <stdio.h>
int main(void){
    int a,c=0,b=0;
    scanf("%d",&a);
    while(a){
        c=a%10+c;
        a=a/10;
        b++;    
    }
    printf("%d %d",b,c);
    system("pause");
    return 0;
}