//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30796
#include <stdio.h>

int main(){
    char input;
    int ISBN[10];
    for(int i=0; i<10; i++){
        scanf("%c", &input);
        //printf("[%c], ", input);
        if(input == 'X'){
            ISBN[i] = 10;
        }
        else{
            ISBN[i] = input - '0';
        }
        getchar();
        //printf("%d, ", ISBN[i]);
    }
    for(int i=1;i<10;i++){
        ISBN[i] = ISBN[i] + ISBN[i - 1];
    }
    for(int i=1;i<10;i++){
        ISBN[i] = ISBN[i] + ISBN[i - 1];
    }
    if(ISBN[9] % 11 == 0)
        printf("YES\n");
    else
        printf("NO\n");
}
