#include <stdio.h>
int main(){
    long long testcase;
    scanf("%lld",&testcase);
    for(long long i=0;i<testcase;i++){
        long long jumlah_orang,antrian,n=1;
        int cek=0;
        long long simpan=1,sementara=1000;
        scanf("%lld %lld",&jumlah_orang,&antrian);
        while(antrian!=0){
            int kode=0;
            for(long long i=simpan;i<=jumlah_orang;i+=n){
                if(cek==0){
                    // printf("INI 0\n");
                    cek=1;
                    antrian--;
                }else if(cek==1){
                    // printf("INI 1\n");
                    cek=0;
                    if(kode==0){
                        sementara=i;
                        kode=1;
                    }
                }
                if(antrian==0){
                    printf("%lld\n",i);
                    break;
                }
            } 
            simpan=sementara;
            n*=2;
        }
        
    }
}