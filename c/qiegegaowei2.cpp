#include <stdlib.h>
#include <stdio.h>
int main(void){
    // int c=0,b=1,a,d;
    // scanf("%d",&a);
    // d=a;
    // while(d){
    //     d/=10;
    //     c++;
    //     b*=10;
    // }
    // while(c){
    //     b/=10;
    //     printf("%d ",a/b);
    //     a%=b;
    //     c--;
    // }
	int num=0,t=0,mask=1;
	scanf("%d",&num);
	t=num;
	while(t>9){
		t/=10;
		mask*=10;
	}
	while(mask>0){
	 printf("%d ",num/mask);      //注意最后一个空格要不要 本题目要 有的题目不要  
		num%=mask;
		mask/=10;
	} 
    system("pause");
    return 0;
}