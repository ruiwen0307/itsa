//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=15914
#include <stdio.h>

int main(){
    int sum, n, score, ht60, ht80, lt60;
    scanf("%d",& n);
    for(int i=0; i<n; i++){
        ht60 = 0;
        ht80 = 0;
        lt60 = 0;
        sum = 0;
        for(int j=0; j<3; j++){
            scanf("%d", &score);
            sum += score;
            if(score < 60){
                lt60++;
            }
            if(score >= 60){
                ht60++;
            }
            if(score >= 80){
                ht80++;
            }
        }
        if(ht60 == 3){
            printf("P\n");
            continue;
        }
        if(lt60 == 1 && sum >= 220){
            printf("P\n");
            continue;
        }
        if(lt60 == 1 && sum < 220){
            printf("M\n");
            continue;
        }
        if(lt60 == 2 && ht80 == 1){
            printf("M\n");
            continue;
        }
        printf("F\n");
    }
}
