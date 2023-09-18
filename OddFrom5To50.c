# include<stdio.h>

void copier( int* n, int* N);
int main(){
    int n;
    scanf("%d", &n);
    int N;
    scanf("%d", &N);
    for (int i=n; i<=N;i++){
        if (i%2!=0){
            printf("%d",i);
            continue;
        }
    }
    copier(&n,&N);
    return 0;
}
void copier(int* n, int* N){
    int ntemp= *n;
    int Ntemp= *N;
    for (int i =ntemp; i<=Ntemp; i++){
        if(i%2!=0){
            printf("%d", i);
            continue;
        }
    }
}