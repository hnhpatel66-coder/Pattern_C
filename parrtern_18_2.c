#include<stdio.h>

int main(){
    int i,j,n;
    printf("Enter Number of rows:");
    scanf("%d", &n);
// // n=5
// 1
// 01
// 101
// 0101
// 10101
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){  
        if(i==j || (i+j)%2==0)
        printf("1");  
        else{
            printf("0");
        }
        }
        printf("\n");
    }
        return 0;
    }