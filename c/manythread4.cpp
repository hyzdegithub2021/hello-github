#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <stdlib.h>
sem_t bridge;
pthread_mutex_t mutex=PTHREAD_MUTEX_INITIALIZER;
void* west(void* direction){
	int car=0;
	sem_wait(&bridge);
	car++;
	if(car==1){
    pthread_mutex_lock(&mutex);
			for(int i=0;i<5;i++){
		printf("%s:%d\n",(char *)direction,i);
	}
	}
    sem_post(&bridge);
	printf("go\n");
	sem_wait(&bridge);
	car--;
	if(car==0){
		for(int i=4;i>-1;i--){
		printf("%s:%d\n",(char *)direction,i);
	    }
    pthread_mutex_unlock(&mutex);
	}
	sem_post(&bridge);
}

void* east(void* direction){
    	int car=0;
	sem_wait(&bridge);
	car++;
	if(car==1){
        pthread_mutex_lock(&mutex);
		for(int i=0;i<5;i++){
		printf("%s:%d\n",(char *)direction,i);
	}
	}
    sem_post(&bridge);
	printf("go\n");
	sem_wait(&bridge);
	car--;
	if(car==0){
		for(int i=4;i>-1;i--){
		printf("%s:%d\n",(char *)direction,i);
	    }
    pthread_mutex_unlock(&mutex);
	}
	sem_post(&bridge);
}

int main(void){
	char *direction1="west.car";
	char *direction2="east.car";
	pthread_t car1,car2;
    sem_init(&bridge,0,2);
	pthread_create(&car1,NULL,west,direction1);
	pthread_create(&car2,NULL,east,direction2);
	pthread_join(car1,NULL);
	pthread_join(car2,NULL);
    sem_destroy(&bridge);
    system("pause");
	return 0;
}
