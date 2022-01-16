//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=15949
#include<stdio.h>

 int main(){
    int dice[6];
    for(int i=0; i<6; i++) dice[i] = 0;
    int n;
    for(int i = 0;i < 4;i++){
        scanf("%d", &n);
        dice[n - 1] ++;
    }

    int big = -1;
    int sum = 0;
    for(int i = 0;i < 6;i++){
        if(dice[i] == 4){
            printf("WIN\n");
            return 0;
        }
        else if(dice[i] == 3){
            printf("R\n");
            return 0;
        }
        else if(dice[i] == 2){
            big = i;
        }
        else if(dice[i] == 1){
            sum += (i + 1);
        }
    }
    if(big == -1){
        printf("R\n");
    }
    else{
        if(sum == 0){
            printf("%d\n", (big + 1) * 2);
        }
        else{
            printf("%d\n", sum);
        }
    }
}
