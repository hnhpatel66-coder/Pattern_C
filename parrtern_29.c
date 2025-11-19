#include<stdio.h>

int main(){
    int n,a;
    printf("Enter Number of rows:");
    scanf("%d", &n);
    //*********
    //**** **** 
    //***   *** 
    //**     **
    //*       *
    //n=4
    int nst = n;
    int nsp = 1;
    for(int a=1; a<=2*n+1; a++){
        printf("*");
    }
    printf("\n");
    for(int i=1; i<=n; i++){
        for(int j=1; j<=nst; j++){ // stars
            printf("*");
        }
        for(int k=1; k<=nsp; k++){ // space
            printf(" ");
        }
        for(int j=1; j<=nst; j++){ // stars
            printf("*");
        }
        nsp+=2;
        nst--;
        printf("\n");
    }
    return 0;
}