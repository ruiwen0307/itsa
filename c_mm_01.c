//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=2913
#include<stdio.h>
int main(){
    float a, b, h;
    scanf("%f %f %f", &a, &b, &h);
    printf("Trapezoid area:%.1f\n", ((a + b) * h) /2);    
}
