#include <stdio.h>
#include <stdlib.h>
int main(void){
    char c;
    int q=0,w=0,e=0;
    for(;;){
        scanf("%c",&c);
        if(c=='\n') break;
        switch(c){
            case ' ':q++;break;
            case '1':case '2':case '3':case '4':case '5':
            case '6':case '7':case '8':case '9':case '0':w++;break;
            default :e++;break;
        }
    }
    printf("blank = %d, digit = %d, other = %d",q,w,e);
    system("pause");
    return 0;
}