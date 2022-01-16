//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=469
#include<stdio.h>
#include<string.h>

int main(){
    int n;
    char input[265], output[256];
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%s", input);
        input[strlen(input)] = '\0';
        for(int j=0; j<strlen(input); j++){
            output[j] = input[strlen(input) - 1 - j];
        } 
        output[strlen(input)] = '\0';
        printf("%s\n", output);
    }
}
