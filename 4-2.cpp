#include <stdio.h>
#include <stdlib.h>
int main(void){
//声明变量
int  count, count2;
double sum, score;
sum=0;
count=0;
count2=0;
//输入score
scanf("%lf", &score); 
while(score>=0)
{
 //累加sum
 sum=sum+score;
 //计数
 count++;
 //判断是否及格
 if(score<60)
 {
   //计数不及格 
   count2++;
 }
 //输入score
 scanf("%lf", &score); 
}
if(count>0)
{
//判断计数是否>0 
//输出平均值 
  printf("average=%.2f",sum/count);
  printf("failures=%d",count2);
}
else
{
	printf("error");
}
//输出不及格人数
system("pause");
return 0;
} 

