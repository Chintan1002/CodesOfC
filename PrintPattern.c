# include<stdio.h>
/*Print the pattern
                   *****
                   *****
                   *****
                   *****
*/
int main(){
    for(int i=1;i<=4;i++){
        for(int j=5;j>=1;j--){
            printf("*");
        }
        printf("\n");
    }
        return 0;
}