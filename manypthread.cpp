#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <stdlib.h>
sem_t sem;
pthread_mutex_t mutex=PTHREAD_MUTEX_INITIALIZER;
void* west(void* direction){
	int car=0;
	pthread_mutex_lock(&mutex);
	car++;
	if(car==1){
        sem_wait(&sem);
			for(int i=0;i<9;i++){
		printf("%s:%d\n",(char *)direction,i);
	}
	}
	pthread_mutex_unlock(&mutex);
	printf("go\n");
	pthread_mutex_lock(&mutex);
	car--;
	if(car==0){
        sem_post(&sem);
			for(int i=8;i>-1;i--){
		printf("%s:%d\n",(char *)direction,i);
	    }
	}
	pthread_mutex_unlock(&mutex);
}

void* east(void* direction){
    int car=0;
	pthread_mutex_lock(&mutex);
    car++;
    if(car==1){
        sem_wait(&sem);
    for(int i=0;i<9;i++){
		printf("%s:%d\n",(char *)direction,i);
	    }
    }
	pthread_mutex_unlock(&mutex);
    printf("go\n");
	pthread_mutex_lock(&mutex);
	car--;
	if(car==0){
        sem_post(&sem);
		for(int i=8;i>-1;i--){
		printf("%s:%d\n",(char *)direction,i);
	    }
	}
	pthread_mutex_unlock(&mutex);
}

int main(void){
	char *direction1="west";
	char *direction2="east";
	pthread_t car1,car2;
    sem_init(&sem,0,1);
	pthread_create(&car1,NULL,west,direction1);
	pthread_create(&car2,NULL,east,direction2);
	pthread_join(car1,NULL);
	pthread_join(car2,NULL);
    sem_destroy(&sem);
    system("pause");
	return 0;
}
