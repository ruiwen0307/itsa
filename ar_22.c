//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=12216
#include<stdio.h>  
  
int main(){  
    char input[1024];  
    while(scanf("%s",input)!=EOF){  
        char* ptr=input;  
        while(*ptr!='\0'){  
            *ptr-=3;  
            ptr++;  
        }  
        puts(input);  
    }  
    return 0;  
}  
