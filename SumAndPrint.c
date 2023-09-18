# include<stdio.h>
// code to print the sum till n and print those number till 0 in reverse order
int main(){
    int n;
    printf("Enter upper limit: ");
    scanf("%d", &n);
    int sum=0;
    for (int i=0, temp=n;i<=n;i++) {
        sum+=i;
        printf("%d \n",temp);
        --temp;
    }
    printf("%d \n",sum);
    return 0;
}   