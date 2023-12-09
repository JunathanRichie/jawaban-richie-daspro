#include <stdio.h>
struct item{
    int id,kualitas;
    char nama[115];
    long long harga;
};
int main(){
    int N;
    scanf("%d",&N);
    struct item arr[N];
    for(int i=0;i<N;i++){
        scanf("%d%s%lld%d",&arr[i].id,arr[i].nama,&arr[i].harga,&arr[i].kualitas);
    }
    long long index_harga=0,index_kualitas=0;
    for(int i=1;i<N;i++){
        if((arr[i].harga<arr[index_harga].harga)||(arr[i].harga==arr[index_harga].harga&&arr[i].id<arr[index_harga].id)){
            index_harga=i;
        }
        if((arr[i].kualitas>arr[index_kualitas].kualitas)||(arr[i].kualitas==arr[index_kualitas].kualitas&&arr[i].id<arr[index_kualitas].id)){
            index_kualitas=i;
        }
    }
    printf("Best item for price is: %d %s %lld %d\n",arr[index_harga].id,arr[index_harga].nama,arr[index_harga].harga,arr[index_harga].kualitas);
    printf("Best item for quality is : %d %s %lld %d\n",arr[index_kualitas].id,arr[index_kualitas].nama,arr[index_kualitas].harga,arr[index_kualitas].kualitas);
}