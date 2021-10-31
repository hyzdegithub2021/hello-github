#include <stdio.h>
#include <stdlib.h>
int main(void){
    int a,b,c,d,e,f;
    scanf("%d %d %d",&a,&b,&c);
    a>b?d=a,a=b,b=d,(b>c?e=b,b=c,c=e,(a>b?f=a,a=b,b=f,printf("%d->%d->%d",a,b,c):0):0):0;
    printf("%d->%d->%d",a,b,c);
    // a>b?d=a,a=b,b=d:0;
    // b>c?e=b,b=c,c=e:0;
    // a>b?f=a,a=b,b=f:0;
    // printf("%d->%d->%d",a,b,c);
    // int a,b,c,q;
    // scanf("%d %d %d",&a,&b,&c);
    //     if(a>b){
    //         q=a;
    //         a=b;
    //         b=q;
    //     }
    //     if(b>c){
    //         q=b;
    //         b=c;
    //         c=q;
    //     }
    //     if(a>b){
    //         q=a;
    //         a=b;
    //         b=q;
    //     }
    // printf("%d->%d->%d",a,b,c);
    system("pause");
    return 0;
}