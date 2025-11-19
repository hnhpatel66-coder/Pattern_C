#include<stdio.h>

int main(){
   int n;
    printf("Enter Number of rows:");
    scanf("%d", &n);
// n=5
//  A B C D E
//  A B C D E
//  A B C D E
//  A B C D E
//  A B C D E
    for(int i=1; i<=n; i++){
        int a=1;
        for(int j=1; j<=n; j++){
            int d= a+64; // d = 65;
            char ch= (char)d; // char ch= (char)d => ch = 'A'
            printf(" %c", ch);
            a++;
        }
        printf("\n");
    }
    return 0;
}