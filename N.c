#include <stdio.h>
int main(){
    long long jumlah_hari,jumlah_robot;
    scanf("%lld%lld",&jumlah_robot,&jumlah_hari);
    long long beban[jumlah_robot];
    long long sum_beban=0;
    long long max=0;
    for(long long i=0;i<jumlah_robot;i++){
        scanf("%lld",&beban[i]);
        sum_beban+=beban[i];
        if(beban[i]>max){
            max=beban[i];
        }
    }
    long long lowest=max,highest=sum_beban,mid;
    mid=lowest+(highest-lowest)/2;
    while(1){
        long long hari=0;        
        mid=lowest+(highest-lowest)/2;
        long long energi_terpakai=beban[0];
        for(long long i=1;i<jumlah_robot;i++){
            if(energi_terpakai+beban[i]>mid){
                hari+=1;
                energi_terpakai=beban[i];
            }else{
                energi_terpakai+=beban[i];
            }
        }
        hari+=1;
        //printf("ini hari: %lld jika energi: %lld nilai lowest: %lld nilai highest: %lld\n",hari,mid,lowest,highest);
        if(lowest>=highest){
            break;
        }else if(hari>jumlah_hari){
            lowest=mid+1;
        }else if(hari<=jumlah_hari){
            highest=mid;
        }
    }
    printf("%lld",lowest);

}