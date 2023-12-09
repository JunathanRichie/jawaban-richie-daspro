#include <stdio.h>
#include <string.h>
struct data{
    char nama[15];
    long long det;
};
void swap(long long *det1,long long *det2){
    long long temp=*det1;
    *det1=*det2;
    *det2=temp;
}
int main(){
    long long jumlah_penduduk;
    char nama_print[105][15];
    long long index_print=0;
    long long hasil_print[105];
    scanf("%lld",&jumlah_penduduk);
    struct data arr[jumlah_penduduk];
    for(long long i=0;i<jumlah_penduduk;i++){
        scanf("%s",arr[i].nama);
        int a=0,b=0,c=0,d=0;
        scanf("%d",&a);
        scanf("%d",&b);
        scanf("%d",&c);
        scanf("%d",&d);
        arr[i].det=(a*d)-(b*c);
    }
    long long jumlah_query;
    scanf("%lld",&jumlah_query);
    for(long long i=0;i<jumlah_query;i++){
        char swap_or_ans[5];
        scanf("%s",swap_or_ans);
        if(strcmp(swap_or_ans,"swap")==0){
            char nama1[15];
            char nama2[15];
            scanf(" %s",nama1);
            scanf(" %s",nama2);
            long long temu1,temu2;
            for(long long z=0;z<jumlah_penduduk;z++){
                if(strcmp(nama1,arr[z].nama)==0){
                    temu1=z;
                }
                if(strcmp(nama2,arr[z].nama)==0){
                    temu2=z;
                }
            }
            swap(&arr[temu1].det,&arr[temu2].det);
        }else{
            char nama1[15];
            scanf(" %s",nama1);
            strcpy(nama_print[index_print],nama1);
            for(long long z=0;z<jumlah_penduduk;z++){
                if(strcmp(nama1,arr[z].nama)==0){
                    hasil_print[index_print]=arr[z].det;
                }
            }
            index_print+=1;
        }
    }
    for(long long i=0;i<index_print;i++){
        printf("%s =>",nama_print[i]);
        printf(" %lld\n",hasil_print[i]);
    }
}
/*
5
Budi
2 1
4 2
Indi
3 9
4 1
Jeri
6 3
5 7
Abdi
3 5
7 9
Zahri
8 2
6 4
5
swap Jeri Indi
swap Abdi Zahri
ans Indi
swap Indi Budi
ans Budi
*/