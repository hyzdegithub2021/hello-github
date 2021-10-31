#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>
sem_t bridge;
sem_t eastMutex;
sem_t westMutex;
int eastCount=0;
int westCount=0;
void* west(void* arg){
    sem_wait(&westMutex);
    eastCount++;
    if(westCount==1) sem_wait(&bridge);
    sem_post(&westMutex);
    for( int i=1;i<5;i++){
        printf("%s:%d\n",(char *)arg,i);
    } 
    for(int i=4;i>0;i--){
        printf("%s:%d\n",(char *)arg,i);
    }
    sem_wait(&westMutex);
    eastCount--;
    if(eastCount==0) sem_post(&bridge);
    sem_post(&westMutex);
}
void* east(void* arg){
    sem_wait(&eastMutex);
    eastCount++;
    if(eastCount==1) sem_wait(&bridge);
    sem_post(&eastMutex);
    for(int i=1;i<5;i++){
        printf("%s:%d\n",(char *)arg,i);
    } 
    for(int i=4;i>0;i--){
        printf("%s:%d\n",(char *)arg,i);
    }
    sem_wait(&eastMutex);
    eastCount--;
    if(eastCount==0) sem_post(&bridge);
    sem_post(&eastMutex);
}
int main(void){
    pthread_t west1,east1;
    char *count1="west";
    char *count2="east";
    sem_init(&bridge,0,1);
    sem_init(&westMutex,0,1);
    sem_init(&eastMutex,0,1);
    pthread_create(&west1,NULL,west,count1);
    pthread_create(&east1,NULL,east,count2);
    pthread_join(west1,NULL);
    pthread_join(east1,NULL);
    sem_destroy(&bridge);
    sem_destroy(&westMutex);
    sem_destroy(&eastMutex);
    system("pause");
    return 0;
}