# include<stdio.h>
// Program to print if there are even or odd amount of odd numbers
void summation(int num);
int main(){
     int n;
     printf("Enter limit");
     scanf("%d", &n);
     summation(n);
     return 0;
}
void summation(int num){
     int sum;
     for (int i =0;i<=num; i++){
          sum+=i;
     }
     if (sum%2==0){
          printf("Even number of Odd numbers");
     }
     else{
          printf("Odd number of Odd numbers");
     }
}