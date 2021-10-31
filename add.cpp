#include <stdio.h>
#include <stdlib.h>
int main(void){
    int a[4]={2,7,11,15},b=9,i,o;
    for(i=0;i<=2;i++){
        for(o=i;o<=i;o++){
            if(a[i]+a[o+1]==b) printf("[%d,%d]",i,o+1);
        }
    }
    system("pause");
    return 0;
}