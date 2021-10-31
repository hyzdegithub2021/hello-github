#include <stdio.h>
#include <stdlib.h>
int main(void){
    int a,i;
    scanf("%d",&a);
    if(a<=2100&&a>2003){
        for(i=2001;i<=a;i++){
            if(i%4==0&&i%100!=0||i%400==0){
                printf("%d\n",i);
            }
        }
    }else if(a>2000&&a<2004){
        printf("None");
    }else{
        printf("Invalid year!");
    }
    system("pause");
}