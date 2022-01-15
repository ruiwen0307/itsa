//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=15950
#include <stdio.h>
#include <string.h>

int main(){
    float N, ns, nns;
    while(scanf("%f", &N) != EOF){
        ns = 0;
        nns = 0;

        if(N > 700){
            ns += (N - 700) * 5.63;
            nns += (N - 700) *4.5;
            N = 700;
        }
        if(N > 500){
            ns += (N - 500) * 4.97;
            nns += (N - 500) *4.01;
            N = 500;
        }
        if(N > 330){
            ns += (N - 330) * 4.39;
            nns += (N - 330) *3.61;
            N = 330;
        }
        if(N > 120){
            ns += (N - 120) * 3.02;
            nns += (N - 120) * 2.68;
            N = 120;
        }
        ns += N * 2.1;
        nns += N * 2.1;

        printf("Summer months:%.2f\n",ns);
        printf("Non-Summer months:%.2f\n",nns);
    }
}
