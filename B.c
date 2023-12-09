#include <stdio.h>
int main(){
    long long pernah[1000001];
    long long N;
    scanf("%lld",&N);
    long long arr[N];
    for(long long i=0;i<1000001;i++){
        pernah[i]=0;
    }
    for(long long i=0;i<N;i++){
        scanf("%lld",&arr[i]);
    }
    long long count=0;
    for(long long i=0;i<N;i++){
        long long nilai_array=arr[i];
        if(pernah[nilai_array+1]>0){
            pernah[nilai_array+1]-=1;
            pernah[nilai_array]+=1;
        }else{
            pernah[nilai_array]+=1;
        }
    }
    for(long long i=0;i<1000001;i++){
        count+=pernah[i];
    }
    printf("%lld\n",count);
}