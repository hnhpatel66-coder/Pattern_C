#include<stdio.h>

int main(){
    int n;
    printf("Enter Number of rows:");
    scanf("%d", &n);
// n=5
// 1 
// A B
// 1 2 3
// A B C D
// 1 2 3 4 5
    for(int i=1; i<=n; i++){
        if(i%2!=0){
            for(int j=1; j<=i; j++){ // iner loop => no of star each line = colume
            printf("%d ", j);
            }
        }
        else if(i%2==0){
        int a=1;
        for(int j=0; j<=i-1; j++){
            int d=a+64;
            char ch=(char)d;
            printf("%c ", ch);
            a++;
        }
    }
        printf("\n");
    }


return 0;
}