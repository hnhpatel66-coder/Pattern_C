#include<stdio.h>

int main(){
    int n;
    printf("Enter Number of rows:");
    scanf("%d", &n);
    // n =5
    // 12345
    // 1234
    // 123
    // 12
    // 1
    for(int i=1; i<=n; i++){ // outer loop => no of lines = rows -> i
        for(int j=1; j<=n+1-i; j++){ // iner loop => no of star each line = colume ->j
        printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}