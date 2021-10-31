#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main(void){
    float eps,total=0,grade=1,a=1;
    int minus=1;
    scanf("%f",&eps);
    while(fabs(a)>eps){
        total=total+a;
        minus=-minus;
        grade=grade+3;
        a=minus*1/grade;
    }
    total=total+a;
    printf("%f",total);
    system("pause");
    return 0;
}