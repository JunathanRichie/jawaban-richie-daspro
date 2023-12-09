#include <stdio.h>
#include <string.h>
struct peti_rahasia{
    long long kunci;
    char isi_peti[20];
};
int main(){
    long long banyak_peti, banyak_kunci;
    scanf("%lld",&banyak_peti);
    scanf("%lld",&banyak_kunci);
    long long kunci[banyak_kunci];
    struct peti_rahasia arr[banyak_peti];
    for(long long i=0;i<banyak_peti;i++){
        scanf("%lld",&arr[i].kunci);
        scanf(" %s",arr[i].isi_peti);
    }
    for(long long i=0;i<banyak_kunci;i++){
        scanf("%lld",&kunci[i]);
    }
    for(long long i=0;i<banyak_kunci;i++){
        long long kode=0;
        char print_ini[20];
        for(long long j=0;j<banyak_peti;j++){
            if(kunci[i]==arr[j].kunci){
                kode=1;    
                strcpy(print_ini,arr[j].isi_peti);
                break;
            }
        }
        if(kode==0){
            printf("========= Emangnya ada isinya? ============\n");
        }else{
            printf("%s\n",print_ini);
        }
    }
}