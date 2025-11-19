#include<stdio.h>

int main(){
    int i,j,n;
    printf("Enter Number of rows:");
    scanf("%d", &n);
// n=5
// ##*##
// ##*##
// *****
// ##*##
// ##*##
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j==n/2+1 || i==n/2+1){ // i==3 ; j==3
            printf("*");
            }
            else{
                printf("#");
            }
        }
        printf("\n");
    }
    
return 0;
}