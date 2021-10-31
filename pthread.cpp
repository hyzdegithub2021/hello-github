#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <errno.h> //宏 ESRCH
void* test1(void* a){
    int i;
    for(i=1;i<=5;i++){
        printf("qwe%s",(char *)a);
    }
}
void* test2(void* a){
    printf("as%s",(char *)a);
}
int main(void){
    int a;
    char *b="123";
    void *c;
    pthread_t t1,t2;
    pthread_create(&t1,NULL,test1,(void *)b);
    pthread_create(&t2,NULL,test2,NULL);
    a=pthread_join(t2,&c);
    a=pthread_join(t2,&c);
    if(a==ESRCH) printf("3 %d",a);
    printf("%d",a);
    system("pause");
    return 0;
}