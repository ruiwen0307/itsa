//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30787
#include <stdio.h>
#include <string.h>

int main(){
    int array[3][3], winner = 0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &array[i][j]);
        }
    }

    if(array[0][0] == array[0][1] && array[0][1] == array[0][2]) winner = 1;
    if(array[1][0] == array[1][1] && array[1][1] == array[1][2]) winner = 1;
    if(array[2][0] == array[2][1] && array[2][1] == array[2][2]) winner = 1;
    if(array[0][0] == array[1][0] && array[1][0] == array[2][0]) winner = 1;
    if(array[0][1] == array[1][1] && array[1][1] == array[2][1]) winner = 1;
    if(array[0][2] == array[1][2] && array[1][2] == array[2][2]) winner = 1;
    if(array[0][0] == array[1][1] && array[1][1] == array[2][2]) winner = 1;
    if(array[0][2] == array[1][1] && array[1][1] == array[2][0]) winner = 1;

    if(winner) printf("True\n");
    else printf("False\n");
}
