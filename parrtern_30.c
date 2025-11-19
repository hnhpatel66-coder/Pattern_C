#include<stdio.h>

int main(){
    int n,a;
    printf("Enter Number of rows:");
    scanf("%d", &n);
    //1234567
    //123 567 
    //12   67 
    //1     7
    //n=3
    int nst = n;
    int nsp = 1;
    for(int a=1; a<=2*n+1; a++){
        printf("%d", a);
    }
    printf("\n");
    for(int i=1; i<=n; i++){
        int b=1;
        for(int j=1; j<=nst; j++){ // stars
            printf("%d", b);
            b++;
        }
        for(int k=1; k<=nsp; k++){ // space
            printf(" ");
            b++;
        }
        for(int j=1; j<=nst; j++){ // stars
            printf("%d", b);
            b++;
        }
        nsp+=2;
        nst--;
        printf("\n");
    }
    return 0;
}