#include <stdio.h>
#include <stdlib.h>
int main(void){
    int t;
    float s,m;
    scanf("%f %d",&s,&t);
    if(s<=3){
        m=10;
        if(t>=5){
            m=m+t/5*2;
        }
    }else if(10>=s&&s>3){
        m=10+(s-3)*2;
        if(t>=5){
            m=m+t/5*2;
        }
    }else{
        m=24+(s-10)*3;
        if(t>=5){
            m=m+t/5*2;
        }
    }
    printf("%.0f",m);
    // double k;
    // int time;
    // scanf("%lf %d",&k,&time);
    // double money1=time/5*2.0;
    // double money2=10.0;
    // double money;
    // if(k<3.0) money=money1+money2;
    // else{
    //     if(k<10.0) money=money1+money2+(k-3.0)*2.0;
    //     if(k>=10.0) money=money1+money2+(10.0-3.0)*2.0+(k-10.0)*3.0;
    // }
    // printf("%.0lf\n",money);
    system("pause");
    return 0;
}