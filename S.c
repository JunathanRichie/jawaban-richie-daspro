#include <stdio.h>
#include <string.h>
struct pahlawan{
    long long H;
    double A;
    char gender;
    char nama[105];
};
int main(){
    long long jumlah_pahlawan;
    scanf("%lld ",&jumlah_pahlawan);
    struct pahlawan arr[jumlah_pahlawan];
    int palindrom_indetifier[jumlah_pahlawan];
    for(long long i=0;i<jumlah_pahlawan;i++){
        scanf("%lld %lf %c ",&arr[i].H,&arr[i].A,&arr[i].gender);
        gets(arr[i].nama);
        palindrom_indetifier[i]=0;
    }
    int kode_perang=1;
    long long palindrom_count=0;
    for(long long i=0;i<jumlah_pahlawan/2;i++){
        palindrom_count=0;
        if(arr[i].H==arr[jumlah_pahlawan-1-i].H){
            palindrom_count+=1;
        }
        if(arr[i].A==arr[jumlah_pahlawan-1-i].A){
            palindrom_count+=1;
        }
        if(arr[i].gender==arr[jumlah_pahlawan-1-i].gender){
            palindrom_count+=1;
        }
        if(strcmp(arr[i].nama,arr[jumlah_pahlawan-1-i].nama)==0){
            palindrom_count+=1;
        }
        if(palindrom_count<2){
            palindrom_indetifier[i]=1;
            palindrom_indetifier[jumlah_pahlawan-1-i]=1;
            kode_perang=0;
        }
    }
    if(kode_perang==1){
        printf("Siap perang, Dewi Shita!");
    }else{
        printf("Sebentar Dewi Shita, belum palindrom nih.\n");
        for(long long i=0;i<jumlah_pahlawan;i++){
            if(palindrom_indetifier[i]==1){
                printf("%lld ",i+1);
            }
        }
    }
}