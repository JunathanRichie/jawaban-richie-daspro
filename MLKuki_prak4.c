#include <stdio.h>
#include <string.h>
int main(){
    int testcase;
    scanf("%d",&testcase);
    for(int i=0;i<testcase;i++){
        char lokasi_barang[101][105];
        char barang_dicari[101][105];
        int jumlah_lokasi;
        int jumlah_cari;
        scanf("%d",&jumlah_lokasi);
        for(int i=0;i<=jumlah_lokasi;i++){
            char str[105];
            //scanf("%[^\n]*c",str);
            gets(str);
            //printf("--%s\n",str);
            strcpy(lokasi_barang[i],str);
        }
        scanf("%d",&jumlah_cari);
        for(int i=0;i<=jumlah_cari;i++){
            char str[105];
            gets(str);
            strcpy(barang_dicari[i],str);
        }
        for(int i=1;i<=jumlah_cari;i++){
            int simpan_j=0,kode=0;
            for(int j=1;j<=jumlah_lokasi;j++){
                if(strcmp(lokasi_barang[j],barang_dicari[i])==0){
                    kode=1;
                    simpan_j=j;
                    //printf("Ditemukan di laci ke-%d\n",j);
                    break;
                }
            }
            if(kode==0){
                printf("Maaf, belum terlacak :^(\n");
            }else{
                printf("Ditemukan di laci ke-%d\n",simpan_j);
            }
        }
    }
}