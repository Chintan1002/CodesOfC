# include<stdio.h>

int main(){
    int n,prod=1;
    printf("Enter number: \n");
    scanf("%d", &n);
    for (int i=1; i<=n;i++){
        prod*=i;
    }
    printf("%d\n", prod);
    return 0;
}