#include<stdio.h>
int main()  {
    int a, b;
    printf("Enter two number: ");
    scanf("%d  %d", &a, &b);
    
     
    printf("\nsum of two number : %d", a+b);
    printf("\nsubtraction of two number : %d", a-b);
    printf("\nproduct of two number : %d", a*b);
    printf("\ndivision of two number : %d", a/b);
    printf("\naverage of two number : %f", (a+b)/2.0);


    return 0;
 }