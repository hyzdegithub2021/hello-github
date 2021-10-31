#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void){
    double x1,x2,x3,y1,y2,y3;
    scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3);
    double a,b,c;
    a=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    b=sqrt(pow((x2-x3),2)+pow((y2-y3),2));
    c=sqrt(pow((x3-x1),2)+pow((y3-y1),2));
    double l,q;
    l=(a+b+c)/2;
    q=sqrt(l*(l-a)*(l-b)*(l-c));
    if(q<=0) printf("Impossible");
    else printf("L = %.2lf, A = %.2lf",a+b+c,q);
    system("pause");
    return 0;
}