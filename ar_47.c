//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=15535

#include<stdio.h>  
#include<stdlib.h>  
  
int main(){  
    int n;  
    while(scanf("%d",&n)!=EOF){  
        while(n>=5 && n%5==0){  
            n/=5;  
        }  
        while(n>=3 && n%3==0){  
            n/=3;  
        }  
        while(n>=2 && n%2==0){  
            n/=2;  
        }  
        if(n==1) puts("Regular number!");  
        else puts("Irregular number!");  
    }  
    return 0;  
}  
