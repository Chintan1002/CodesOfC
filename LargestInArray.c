# include<stdio.h>
// Program to print the largest number in an array
void count(int arr[], int n);
int main(){
     int n;
     printf("Enter array length: ");
     scanf("%d", &n);
     int arr[n];
     for(int i=0;i<n;i++){
          scanf("%d", &arr[i]);
     }
     count(arr,n);
     return 0;
}
void count(int arr[],int n){
     int largest=arr[0];
     for(int i=0;i<n;i++){
          if(largest<=arr[i]){
               largest=arr[i];
          }
          else{
               largest=largest;
          }
     }
     printf("The largest number is: %d\n", largest);
}