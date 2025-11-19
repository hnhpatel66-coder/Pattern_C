#include<stdio.h>

int main(){
    int i,j,n;
    printf("Enter Number of rows:");
    scanf("%d", &n);
// n=5
// 1
// 35
// 7911
// 13151719
// 2123252729
    int a=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){  
        printf("%d", a);
        a=a+2;  
        }
        printf("\n");
    }
        return 0;
    }