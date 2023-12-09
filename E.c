#include <stdio.h>
int N;
void tukar(long long arr[N][N]){
    long long temp[N][N];
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            temp[i][j]=arr[i][j];
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            arr[i][j]=temp[j][N-1-i];
        }
    }
}
int main(){
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        long long M;
        scanf("%d %lld",&N,&M);
        long long matriks[N][N];
        for(int j=0;j<N;j++){
            for(int k=0;k<N;k++){
                scanf("%lld",&matriks[j][k]);
            }
        }
        for(int z=0;z<M;z++){
            tukar(matriks);
        }
        for(int j=0;j<N;j++){
            for(int k=0;k<N;k++){
                printf("%lld ",matriks[j][k]);
            }printf("\n");
        }
    }
}