#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}
int findDifferencePower(int n) {
    //printf("MASUK BERULANG-%d\n",n);
    int lpow = 1;
    while (1) {
        for (int mpow = lpow - 1; mpow >= 0; mpow--) {
            if ((long long)(pow(10, lpow) - pow(10, mpow)) % n == 0) {
                return lpow - mpow;
            }
            if(lpow-mpow==16){
                return 16;
            }
        }
        lpow++;
    }
}
int main(){
    long long testcase;
    scanf("%lld",&testcase);
    for(long long i=0;i<testcase;i++){
        int start;
        int index_simpan=0,arr[10000];
        scanf("%x",&start);
        printf("Starting from %xtopia, the spy traversed these nations:\n",start);
        while(start!=1){
            printf("%xtopia, ",start);
            if((start%10==1||start%10==3||start%10==7||start%10==9)){
                arr[index_simpan]=start;
                index_simpan++;
            }
            if(start%2==0){
                start/=2;   
            }else{
                start=start*3+1;
            }
        }

        printf("%xtopia.\n",start);
        long long count=0;
        qsort(arr,index_simpan,sizeof(int),cmpfunc);
        for(int j=0;j<index_simpan;j++){
            long long jumlah_digit;
            long long hasil_angka;
            jumlah_digit=findDifferencePower(arr[j]);
            if(jumlah_digit<=15){
                char hasil[16];
                count++;
                long double temp=arr[j];
                temp=(1-(1/temp))*pow(10,jumlah_digit);
                hasil_angka=(long long)temp;
                for(int z=14;z>=0;z--){
                    if(hasil_angka==0){
                        hasil_angka=(long long)temp;   
                    }
                    hasil[z]=(hasil_angka%10)+48;
                    hasil_angka/=10;
                }
                hasil[14]+=1;
                hasil[15]='\0';
                printf("Disabled %xtopia's force field using a pulse strength of ...%s units.\n",arr[j],hasil);
            }
        }
        if(count==0){
            printf("No tracked nation has a breachable force field. We are not successful for today...\n\n");
        }else if(count==1){
            printf("Today's operation was successful, we have breached %lld force field.\n\n",count);
        }else{
            printf("Today's operation was successful, we have breached %lld force fields.\n\n",count); 
        }
    }
}