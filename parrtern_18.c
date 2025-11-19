#include<stdio.h>

int main(){
    int i,j,n;
    printf("Enter Number of rows:");
    scanf("%d", &n);
// n=5
// 1
// 01
// 101
// 0101
// 10101
    int a;
    for(int i=1; i<=n; i++){
        if(i%2!=0) a=1;
        else a=0;
        for(int j=1; j<=i; j++){  
        printf("%d", a);
        if(a==0) a=1;
        else a=0;
        }
        printf("\n");
    }
        return 0;
    }