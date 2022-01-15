//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30751
#include <stdio.h>

int main(){
    int N, sum;
    while(scanf("%d", &N) != EOF){
        sum = 0;
        for(int i=0; i<=N; i++){
            if(i % 3 == 0) sum += i;
        }
        printf("%d\n", sum);
    }
}
