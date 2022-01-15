//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30752
#include <stdio.h>

int main(){
    int N, flag;
    while(scanf("%d", &N) != EOF){
        flag = 1;
        for(int i=2; i<N; i++){
            if(N % i == 0){
                printf("NO\n");
                flag = 0;
                break;
            }
        }
        if(flag == 1) printf("YES\n");
    }
}
