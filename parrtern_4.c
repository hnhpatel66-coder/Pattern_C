#include<stdio.h>

int main(){
    int n;
    printf("Enter Number of rows:");
    scanf("%d", &n);
    // n=5
    // *
    // **
    // ***
    // ****
    // *****
    for(int i=1; i<=n; i++){ // outer loop => no of lines = rows -> i
        for(int j=1; j<=i; j++){ // iner loop => no of star each line = colume ->j
        printf("*");
        }
        printf("\n");
    }

    return 0;
}