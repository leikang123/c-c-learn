#include <stdio.h>

int main() {
    int i,j,k;
    for(int i=0;i<100;i++){
        for(int j=0;j<100;j++){
            for (int k =0;k<100;k++){
                if(i+j+k ==100 && i*5+j*3+k/3.0 ==100)
                printf("%d     %d      %d      \n",i,j,k);
            }
        }
    }
}
