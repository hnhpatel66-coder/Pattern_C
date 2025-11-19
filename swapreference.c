#include<stdio.h>
// pass by refernce
void swap(int* x, int* y){
    int c;
    c = *x;
    *x = *y;
    *y = c;
    return;
}

int main(){
    int a=3;
    int b=9;
    
    swap(&a,&b);
    
    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);
    return 0;
}