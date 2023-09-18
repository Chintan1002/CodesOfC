# include<stdio.h>
// Program to print the largest number in an array
// void count(int arr[], int n);
int main(){
     int a;
//     int n;
//     printf("Enter array length: ");
//     scanf("%d", &n);
     int arr[100000000]={};
     int counter=0;
     int i=0;
     char check;
     // while(check=='Y'){
     //      scanf("%d", &arr[i]);
     //      scanf("%c", &check);
     //      i++,counter++;
     
     // }
     scanf("%d", &arr[0]); 
     counter++;
     for(int i=1;i<=counter;i++){
          // scanf("%d", &arr[i]);
          // counter++;u
          printf("Add more?(Y/N): ");
          scanf("%c", &check);
          if (check=='Y'){
               scanf("%d", &arr[i]);
               counter++;
          }
          else{
               printf("Enter Extra Number: ");
          }
          // else{
          //      continue;
          // }50
     }
     scanf("%d", &arr[counter+1]);
//     count(arr,n);
     return 0;
}
// void count(int arr[],int n){
//      int largest=arr[0];
//      for(int i=0;i<n;i++){
//           if(largest<=arr[i]){
//                largest=arr[i];
//           }
//           else{
//                largest=largest;
//           }
//      }
//      printf("The largest number is: %d\n", largest);
// }
// void count(int arr[], int n){
//      int largest=arr[0];
//      for(int i=0; i<n;i++){
//           if(largest<=arr[i]){
//                largest=arr[i];
//           }
//           else{
//                largest=largest;
//           }
//      }
//      printf("The largest number is: %d\n", largest);
// }