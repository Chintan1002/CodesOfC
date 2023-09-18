# include<stdio.h>
// Program to fnd how mny times a number has been repeated in an array
void count();
int main(){
    count();
    return 0;
}
void count(){
    int n;
    printf("Enter array length: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int check;
    printf("Enter required number: ");
    scanf("%d", &check);
    int counter=0;
    for(int i=0;i<n;i++){
        if(arr[i]==check){
            counter++;
        }
    }
    printf("Total times the cumber has been repeated is: %d\n", counter);
}