#include<stdio.h>

int main(){
   int n;
    printf("Enter Number of rows:");
    scanf("%d", &n);
//n=5
// 1 
// 1 3
// 1 3 5
// 1 3 5 7
// 1 3 5 7 9
    for(int i=1; i<=n; i++){
        int a=1;
        for(int j=1; j<=i; j++){
        printf("%d ", a);
        a = a + 2;
        }
        printf("\n");
    }

    return 0;
}