//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30754
#include <stdio.h>

int main(){
    int N;
    while(scanf("%d", &N) != EOF){
        if(3 <= N && N <= 5) printf("Spring\n"); 
        else if(6 <= N && N <= 8) printf("Summer\n"); 
        else if(9 <= N && N <= 11) printf("Autumn\n"); 
        else printf("Winter\n"); 
    }
}
