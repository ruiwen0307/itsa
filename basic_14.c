//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30766
#include<stdio.h>
#include<string.h>
int main(){
    char n[100];
    int end, flag;
    while(scanf("%s", n) != EOF){
        end = strlen(n) - 1;
        flag = 1;
        for(int i=0; i<strlen(n)/2; i++){
            if(n[i] != n[end - i]){
                flag = 0;
                break;
            }
        }
        if(flag == 1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}

