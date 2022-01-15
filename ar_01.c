//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/history.php?a=76
#include<stdio.h>  
#include<stdlib.h>  
  
int main(){  
    int input;  
    int array[50][50];  
    int x=0,y=0;  
    for(int i=0; i<50; i++){  
        for(int j=0; j<50; j++){  
            array[i][j]=0;  
        }  
    }  
    int dir=1;//dir 1=right, 2=down, 3=left, 4=up  
    int max_x=0,max_y=0;  
    while(scanf("%d,",&input) && input != 9){  
        if(input==2){  
            array[y][x]=1;  
        }  
        else if(input==3){  
            dir++;  
            if(dir==5) dir=1;  
        }  
        else if(input==4){  
            dir--;  
            if(dir==0) dir=4;  
        }  
        else if(input==5){  
            int step;  
            scanf("%d",&step);  
            if(dir==1){  
                for(int i=0; i<step; i++){  
                    x++;  
                    array[y][x]=1;  
                    if(x>max_x) max_x=x;  
                }  
            }  
            else if(dir==2){  
                for(int i=0; i<step; i++){  
                    y++;  
                    array[y][x]=1;  
                    if(y>max_y) max_y=y;  
                }  
            }  
            else if(dir==3){  
                for(int i=0; i<step; i++){  
                    x--;  
                    array[y][x]=1;  
                }  
            }  
            else if(dir==4){  
                for(int i=0; i<step; i++){  
                    y--;  
                    array[y][x]=1;  
                }  
            }  
        }  
        else if(input==6){  
            for(int i=0; i<=max_y; i++){  
                for(int j=0;j<=max_x; j++){  
                    if(array[i][j]==1){  
                        printf("*");  
                    }  
                    else{  
                        printf(" ");  
                    }  
                }  
                printf("\n");  
            }  
        }  
    }  
} 
