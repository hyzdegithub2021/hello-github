#include <stdio.h>
#include <stdlib.h>
int main(void){
    char a;
    int q=0,w=0,e=0,r=0,i;
    for(i=1;i<=10;i++){
        scanf("%c",&a);
        if((a>='a'&&a<='z')||(a>='A'&&a<='Z')){
            q++;
        }else if(a==' '||a=='\n'){
            w++;
        }else if(a>='0'&&a<='9'){
            e++;
        }else{
            r++;
        }
    }
    printf("letter = %d, blank = %d, digit = %d, other = %d",q,w,e,r);
    system("pause");
}