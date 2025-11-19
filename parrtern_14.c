#include<stdio.h>

int main(){
    int i,j,r,c;
    printf("Enter Number of rows:");
    scanf("%d", &r);
    printf("Enter Number of colums:");
    scanf("%d", &c);
// r=7, c=5
// * * * * * 
// * # # # *
// * # # # *
// * # # # *
// * # # # *
// * # # # *
// * * * * *
    for(int i=1; i<=r; i++){
        for(int j=1; j<=c; j++){
            if(i==1 || j==1 || i==r || j==c ){ // N=> if(i==j || j==1 || j==c )
            printf("* ");
            }
            else{
                printf("# ");
            }
        }
        printf("\n");
    }
    
return 0;
}