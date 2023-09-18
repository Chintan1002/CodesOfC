# include<stdio.h>
// Program to print all prime numbers in a given range
int main(){
    int u,l;
    printf("Enter a upper: ");
    scanf("%d", &u);
    printf("Enter a lower: ");
    scanf("%d", &l);
    for(int i=l;i<=u;i++){
        int count=0;
        for(int j =2; j<i;j++){
        if(i%j==0){
            count++;
            break;
        }
        }
        if (count==0){
            printf("%d\n", i);
        }
    }
        return 0;
}