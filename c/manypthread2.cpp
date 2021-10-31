#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <stdlib.h>
sem_t sem1,sem2;
pthread_mutex_t mutex=PTHREAD_MUTEX_INITIALIZER;
void* west(void* direction){
	int car=0;
	sem_wait(&sem1);
	car++;
	if(car==1){
    pthread_mutex_lock(&mutex);
			for(int i=0;i<9;i++){
		printf("%s:%d\n",(char *)direction,i);
	}
	}
    sem_post(&sem1);
	printf("go\n");
	sem_wait(&sem1);
	car--;
	if(car==0){
		for(int i=8;i>-1;i--){
		printf("%s:%d\n",(char *)direction,i);
	    }
    pthread_mutex_unlock(&mutex);
	}
	sem_post(&sem1);
}

void* east(void* direction){
    	int car=0;
	sem_wait(&sem2);
	car++;
	if(car==1){
        pthread_mutex_lock(&mutex);
		for(int i=0;i<9;i++){
		printf("%s:%d\n",(char *)direction,i);
	}
	}
    sem_post(&sem2);
	printf("go\n");
	sem_wait(&sem2);
	car--;
	if(car==0){
		for(int i=8;i>-1;i--){
		printf("%s:%d\n",(char *)direction,i);
	    }
    pthread_mutex_unlock(&mutex);
	}
	sem_post(&sem2);
}

int main(void){
	char *direction1="west.car";
	char *direction2="east.car";
	pthread_t car1,car2;
    sem_init(&sem1,0,1);
    sem_init(&sem2,0,1);
	pthread_create(&car1,NULL,west,direction1);
	pthread_create(&car2,NULL,east,direction2);
	pthread_join(car1,NULL);
	pthread_join(car2,NULL);
    sem_destroy(&sem1);
    sem_destroy(&sem2);
    system("pause");
	return 0;
}
