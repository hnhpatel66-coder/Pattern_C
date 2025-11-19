#include<stdio.h>

int main(){
    int n,a;
    printf("Enter Number of rows:");
    scanf("%d", &n);
// n=5
//     A
//    ABA
//   ABCAB
//  ABCDABC
// ABCDEABCD
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            printf(" ");
        }int b=1;
        for(int k=1; k<=i; k++){
            int d=b+64;
            char ch=(char)d;
            printf("%c", ch);
            b++;
        }
        int a=1;
         for(int t=1; t<=i-1; t++){
            int d=a+64;
            char ch=(char)d;
            printf("%c", ch);
            a++;
        }
        printf("\n");
    }

    return 0;
}