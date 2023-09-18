# include<stdio.h>
// check if a number is a prime number only using nested loops
int main(){
    int n,count=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i =2; i<n;i++){
        if(n%i==0){
            printf("Not a prime number");
            count++;
            break;
        }
    }
    if (count==0){
        printf("It is a prime number");
    }
        return 0;
}