# include<stdio.h>
// Program to print Factorial using recursion
int fact(int n);
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("The factorial of number is: %d", fact(n));
        return 0;
}
int fact(int n){
    if(n==1){
        return 1;
    }
    int factFm1= fact(n-1);
    int factF= factFm1*n;
    return factF;
}