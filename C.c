#include <stdio.h>

int main(){
    int testcase;
    scanf("%lld",&testcase);
    for(int i=0;i<testcase;i++){
        long long jumlah_arwah;
        scanf("%lld",&jumlah_arwah);
        long long arr[jumlah_arwah];
        for(long long j=0;j<jumlah_arwah;j++){
            scanf("%lld",&arr[j]);
        }
        long long sum_odd=0,sum_even=0,index_even_min=-10000000000,index_odd_min=-10000000000;
        for(long long j=0;j<jumlah_arwah;j+=2){
            if(arr[j]>index_even_min){
                index_even_min=arr[j];
            }
            if(arr[j]<0){
                continue;
            }
            sum_even+=arr[j];
        }
        for(long long j=1;j<jumlah_arwah;j+=2){
            if(arr[j]>index_odd_min){
                index_odd_min=arr[j];
            }
            if(arr[j]<0){
                continue;
            }
            sum_odd+=arr[j];
        }
        long long max;
        if(sum_even>sum_odd){
            max=sum_even;
        }else{
            max=sum_odd;
        }
        //printf("%lld\n",sum_odd_all);
        if(jumlah_arwah==1){
            printf("Yosh, waktunya menyelamatkan Mob dengan %lld spirit!\n",arr[0]);
        }else if(sum_even==0&&sum_odd==0){
            if(index_even_min>index_odd_min){
                printf("Yosh, waktunya menyelamatkan Mob dengan %lld spirit!\n",index_even_min);
            }else{
                printf("Yosh, waktunya menyelamatkan Mob dengan %lld spirit!\n",index_odd_min);
            }
        }else{
            printf("Yosh, waktunya menyelamatkan Mob dengan %lld spirit!\n",max);
        }
        
    }
}