#include <stdio.h>
#include <stdlib.h>
int main(void){
    for(int i=1;i<=9;i++){
        printf("%2d",(i+2)%3);
    }
    system("pause");
    return 0;
}