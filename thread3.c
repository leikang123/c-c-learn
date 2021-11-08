#include <stdio.h>
#include <pthread.h>

int main(int argc,char *argv[]){
    // 线程的终结API以及各种方法
    // 线程属性
    // 线程的编号ID
    pthread_t tid;
    // 线程的标志
    pthread_attr_t attr;

    // 如果参数
    if(argc != 2){
        fprintf(stderr,"usage: a.out <integer value>\n");
        return -1;
    }if (atoi(argv[1]) <0){
        fprintf(stderr,"%d must be >=0\n",atoi(argv[1]));
        return -1;

    }
// init method
pthread_attr_init(&attr);
pthread_create(&tid,&attr,&runner,argv[1]);
pthread_join(tid,NULL);
// pthread_yeld(&tid);
printf("sum=%d\n",sum);
}
int sum;
void *runner(void *param);

void *runner(void *param){
    int i = atoi(&param);
    int upper = atoi(&param);
     sum = 0;
    for(int i=0;i<=upper;i++)
        sum +=i;
        pthread_exit(0);
    
}