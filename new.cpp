#include <stdio.h>
int main(void){
    int x;
    float y;
    scanf("%d",&x);
    if(x!=0){
        y=1.0/x;
        printf("%.1f",y);
    }
    else printf("%d",0);
}