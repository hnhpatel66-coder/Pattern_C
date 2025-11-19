#include<stdio.h>

int main(){
    int i,j,n;
    printf("Enter Number of rows:");
    scanf("%d", &n);
// n=5
// 1
// 23
// 456
// 78910
// 1112131415
int a=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){  
        printf("%d ", a);
        a++;  
        }
        printf("\n");
    }
        return 0;
    }