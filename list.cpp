//冒泡排序
#include <stdio.h>
#include <stdlib.h>
int main(void){
    const int b=9;
    int a[b]={12,45,23,78,134,35,123};
    for(int q=0;q<b;q++){
        for(int i=0;i<b-q;i++){
                if(a[i]>a[i+1]){
                    int b;
                    b=a[i];
                    a[i]=a[i+1];
                    a[i+1]=b;
                }
            }
    }
    for(int k=0;k<b;k++){
        printf("%d\n",a[k]);
    }
    system("pause");
    return 0;
}