#include<stdio.h>

int main(){
    int n,i;
    printf("Enter Number of rows:");
    scanf("%d", &n);
// n=5 ( DAYMOND PARRTEN)
//   *
//  ***
// *****
//  ***
//   *    
    int nsp = n/2;
    int nst = 1;
    int ml= (n/2+1);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=nsp; j++){
        printf(" ");
    }
    for(int k=1; k<=nst; k++){
        printf("*");
    }
       if(i<ml){
        nsp--; 
        nst +=2;
       }
       else {
        nsp++;
        nst-=2;
       }
    
    printf("\n");
}
    return 0;
}

// #include <stdio.h>

// int main() {
//     int i, j, space, n;

//     // You can change the number of rows (half of diamond)
//     printf("Enter the number of rows: ");
//     scanf("%d", &n);

//     // Upper half of diamond
//     for(i = 1; i <= n; i++) {
//         // Print spaces
//         for(space = 1; space <= n - i; space++) {
//             printf(" ");
//         }
//         // Print stars
//         for(j = 1; j <= 2 *(i - 1); j++) {
//             printf("*");
//         }
//         printf("\n");
//     }

//     // Lower half of diamond
//     for(i = n - 1; i >= 1; i--) {
//         // Print spaces
//         for(space = 1; space <= n - i; space++) {
//             printf(" ");
//         }
//         // Print stars
//         for(j = 1; j <= 2 *(i - 1); j++) {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }