//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30747
#include <stdio.h>

int main(){
    int mile;
    double km;

    while(scanf("%d", &mile) != EOF){
        km = mile * 1.6;
        printf("%.1f\n", km);
    }
}
