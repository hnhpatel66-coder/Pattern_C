#include<stdio.h>

int main(){
    int n;
    printf("Enter Number of rows:");
    scanf("%d", &n);
    // n=5
    // 1 
    // 1 2
    // 1 2 3
    // 1 2 3 4
    // 1 2 3 4 5
    for(int i=1; i<=n; i++){ // outer loop => no of lines = rows
        for(int j=1; j<=i; j++){ // iner loop => no of star each line = colume
        printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}