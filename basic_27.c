//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=15939
#include<stdio.h>
#include<string.h>
int main(){
	int ans , guess , A , B;
	int arr_ans[4] , arr_guess[4];

	scanf("%d", &ans);
	arr_ans[3] = ans % 10;
    arr_ans[2] = (ans / 10) % 10;
    arr_ans[1] = (ans / 100) % 10;
    arr_ans[0] = (ans / 1000) % 10;
	while(scanf("%d", &guess) != EOF){
        A = 0;
        B = 0;
        if(guess == 0) break;
        arr_guess[3] = guess % 10;
        arr_guess[2] = (guess / 10) % 10;
        arr_guess[1] = (guess / 100) % 10;
        arr_guess[0] = (guess / 1000) % 10;

        for(int i = 0;i < 4;i++){
            for(int j = 0;j < 4;j++){
                if(arr_ans[i] == arr_guess[j]){
                    if(i == j){
                        A++;
                    }
                    else{
                        B++;
                    }
                }
            }
        }
        printf("%dA%dB\n", A, B);
	}
}
