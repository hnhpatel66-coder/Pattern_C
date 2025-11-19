#include<stdio.h>

int main(){
    // * * * * 
    // * * * *
    // * * * *
    // * * * *
        for(int i=1; i<=4; i++){ // outer loop => no of lines = rows
            for(int i=1; i<=4; i++){ // iner loop => no of star each line = colume
            printf("* ");
            }
        printf("\n");
    }

    return 0;
}