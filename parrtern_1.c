#include<stdio.h>

int main(){
    int n;
    printf("Enter Number of rows:");
    scanf("%d", &n);
    int m;
    printf("Enter Number of columes:");
    scanf("%d", &m);
    // ros=3
    //colums=5
    // * * * * * 
    // * * * * *
    // * * * * *
    for(int i=1; i<=n; i++){ // outer loop => no of lines = rows
        for(int j=1; j<=m; j++){ // iner loop => no of star each line = colume
        printf("* ");
        }
        printf("\n");
    }

    return 0;
}