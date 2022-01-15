//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/history.php?a=1215
#include<stdio.h>  
#include<stdlib.h>  
  
int main(){  
    int n;  
    int array[50][2]={0};  
    int cnt=0;  
    int flag=0;  
    while(scanf("%d",&n)!=EOF && n!=-999){  
        flag=0;  
        for(int i=0;i<cnt;i++){  
            if(n==array[i][1]){  
                array[i][2]++;  
                flag=1;  
                break;  
            }  
        }  
        if(flag==0){  
            array[cnt][1]=n;  
            array[cnt][2]=1;  
            cnt++;  
        }  
    }  
    int tmp;  
    for(int i=0;i<cnt-1;i++){  
        for(int j=0;j<cnt-i-1;j++){  
            if(array[j][1]<array[j+1][1]){  
                tmp=array[j][1];  
                array[j][1]=array[j+1][1];  
                array[j+1][1]=tmp;  
                tmp=array[j][2];  
                array[j][2]=array[j+1][2];  
                array[j+1][2]=tmp;  
            }  
        }  
    }  
    for(int i=0;i<cnt;i++){  
        printf("%d %d\n",array[i][1],array[i][2]);  
    }  
    return 0;  
}  
