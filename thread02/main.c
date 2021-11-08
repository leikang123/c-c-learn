#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#define NUMBER_OF_THREADS 10

int main(int argc,char argv[]){

 pthread_t threads[NUMBER_OF_THREADS];
 int status;
 int i;

    for(i=0;i<NUMBER_OF_THREADS;i++){
        printf("Main here,Createing thread %d0",i);
        status = pthread_create(&threads[i],NULL,print_hello_world),(void *)i);

        if(status !=0){
            printf("Oops.pthread_create returnd error code %d0",status);
            exit(-1);
        }
    }
    exit(NULL);
}
void *print_hello_world(void *tid){
    printf("Hello world,Greeetings from thread %d0",tid);
    pthread_exit(NULL);
}