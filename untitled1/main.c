#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

void exit(int i);

void wait(void *pVoid);

int main() {
    pid_t pid;
    pid = fork();
    if (pid < 0){
        fprintf(stderr,"Fork Failed");
        // 退出-1
        exit(-1);
    }else if(pid ==0){
        execlp("/bin/ls","ls",NULL);
    }else {
        // d等待
        wait(NULL);
        printf("Clild Complete");
        // 0退出
        exit(0);
    }
}

void wait(void *pVoid) {
    printf("等待。。。。");

}

void exit(int i) {
    printf("退出。。。。");
}
