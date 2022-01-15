//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30786
#include <stdio.h>

int main(){
    float N, min, max;

    for(int i=0; i<10; i++){
        scanf("%f", &N);
        if(i == 0){
            min = N;
            max = N;
            continue;
        }

        if(N > max){
            max = N;
        }
        else if(N < min){
            min = N;
        }
    }
    printf("maximum:%.2f\n", max);
    printf("minimum:%.2f\n", min);
}
