#include<stdio.h>

int main(){
    int n,a;
    printf("Enter Number of rows:");
    scanf("%d", &n);
// n=5
//         A 
//       A B
//     A B C
//   A B C D
// A B C D E
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            printf("  ");
        }
        int a=1;
        for(int k=1; k<=i; k++){
           
            int d=a+64;
            char ch=(char)d;
            printf("%c ", ch);
            a++;
        }
        printf("\n");
    }
    return 0;
}