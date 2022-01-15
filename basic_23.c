//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=15912
#include<stdio.h>
int main(){
    int n, a1, a2, a3, c, cnt50, cnt5, cnt1;
    while(scanf("%d,%d,%d,%d", &n, &a1,&a2,&a3) != EOF){
        cnt1 = 0;
        cnt50 = 0;
        cnt5 = 0;
        if((a1 * 15 + a2 * 20 + a3 * 30) > n){
            printf("0\n");
            continue;
        }
        c = n - (a1 * 15 + a2 * 20 + a3 * 30);
        cnt50 += c / 50;
        c -= (c / 50) * 50;

        cnt5 += c / 5;
        c -= (c / 5) * 5;

        cnt1 += c;

        printf("%d,%d,%d\n", cnt1, cnt5, cnt50);
    }
}

