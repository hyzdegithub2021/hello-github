#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main(void){
    float eps,grade=1,minus=1,add=1,total=0;
    scanf("%f",&eps);
    while (fabs(grade)<eps)
    {
        total+=grade;
        minus=-minus;
        grade=minus*1/(add+2);
    }
    printf("%f",total);
    system("pause");
    return 0;
}