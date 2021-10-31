#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main(void){
    int a,d;
    int b=0,c,e;
    scanf("%ld",&a);
    d=a;
    while(d){
        d=d/10;
        b++;
    }
    while(b){
    e=1*pow(10,b-1);
    c=a/e;
    printf("%d ",c);
    a=a%e;
    b--;
    }
    
    system("pause");
    return 0;
}