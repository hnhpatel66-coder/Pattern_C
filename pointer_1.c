#include<stdio.h>

int main(){
   int a=5; 
   int* x=&a; // int* --> ka address store karta he
   // *x=7; --> vvip // a is changed
   int** y= &x; // int** --> ka address store karta he
   int*** z=&y;
   printf("%p\n", a); 
   printf("%d\n", *x); // %p se address printb hota hae 
   printf("%d\n", **y);
   printf("%d\n", ***z);
return 0;
}