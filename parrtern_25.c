#include<stdio.h>

int main(){
    int n,a;
    printf("Enter Number of rows:");
    scanf("%d", &n);
// n=5
//     1
//    121
//   12312
//  1234123
// 123451234
    for(int i=1; i<=n; i++){
        for(int a=1; a<=n-i; a++){
            printf(" ");
        }
        for(int j=1; j<=i; j++){
            printf("%d", j);
        }
        for(int k=1; k<=i-1; k++){
            printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}