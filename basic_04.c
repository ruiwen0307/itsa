//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30748
#include <stdio.h>

int main(){
    int startH, startM, endH, endM;
    int sm, em, hh;

    while(scanf("%d %d %d %d", &startH, &startM, &endH, &endM) != EOF){
        sm = startM + startH * 60;
        em = endM + endH * 60;
        if(sm > em){
            em += 1440;
        }

        hh = em - sm;
        hh /= 30;
        int sum = 0;
        if(hh > 8){
            sum += (hh - 8) * 60;
            hh = 8;
        }
        if(hh > 4){
            sum += (hh - 4) * 40;
            hh = 4;
        }
        sum += hh * 30;

        printf("%d\n", sum);
    }
}
