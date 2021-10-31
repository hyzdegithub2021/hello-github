#include <stdlib.h>
#include <stdio.h>
int main(void){
    int a,k=65,l=0;
    scanf("%d",&a);
    if(a<7&&a>=1){
        for(int i=a;i>=1;i--){
            l=i+l;
            for(;k<65+l;k++){
                printf("%c ",k);
                
            }
            printf("\n");
        }
    }
    system("pause");
    return 0;
}