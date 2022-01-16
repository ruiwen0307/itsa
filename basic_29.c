//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=15934
#include<stdio.h>
#include<stdlib.h>
#define A 10
#define J 18
#define P 23
int main(){
    int x, x1, x2, p = 0;
    char code[11];
    scanf("%s", code);
    if('A' <= code[0] && code[0] <= 'H'){
        x = A + (code[0] - 'A');
    }
    else if('J' <= code[0] && code[0] <= 'N'){
        x = J + (code[0] - 'J');
    }
    else if('P' <= code[0] && code[0] <= 'V'){
        x = P + (code[0] - 'P');
    }
    else if(code[0] == 'X'){
        x = 30;
    }
    else if(code[0] == 'Y'){
        x = 31;
    }
    else if(code[0] == 'W'){
        x = 32;
    }
    else if(code[0] == 'Z'){
        x = 33;
    }
    else if(code[0] == 'I'){
        x = 34;
    }
    else if(code[0] == 'O'){
        x = 35;
    }
    x1 = x / 10;
    x2 = x % 10;
    //printf("x=%d x1=%d x2=%d\n", x, x1, x2);
    //printf("p=%d\n", p);
    p += x1 + 9 * x2 + (code[9] - '0');
    //printf("p=%d\n", p);
    for(int i=1; i<9; i++){
        p += (9 - i) * (code[i] - '0');
        //printf("p=%d\n", p);
    }
    if(p % 10 == 0){
        printf("CORRECT!!!\n");
    }
    else{
        printf("WRONG!!!\n");
    }
}
