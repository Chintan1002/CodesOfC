# include<stdio.h>
// print the reverse table of a given number
int main(){
    int n;
    printf("Enter number: \n");
    scanf("%d", &n);
    for (int i=10; i>=1;i--){
        printf("%d\n", n*i);
    }
        return 0;
}