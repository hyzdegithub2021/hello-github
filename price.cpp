#include <stdlib.h>
#include <stdio.h>
int main(void){
    int a,i;
    printf("[1] apple\n[2] pear\n[3] orange\n[4] grape\n[0] exit\n");
    for(i=1;i<=5;i++){
        scanf("%d",&a);
        switch(a){
            case 1: printf("price = 3.00\n"); break;
            case 2: printf("price = 2.50\n"); break;
            case 3: printf("price = 4.10\n"); break;
            case 4: printf("price = 10.20\n"); break;
            case 0: exit(0);
            default: printf("price = 0.00\n"); break;
        }
    }
    system("pause");
}