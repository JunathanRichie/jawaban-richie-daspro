#include <stdio.h>

int main()
{
    unsigned long long perulangan;
    scanf("%llu",&perulangan);
    unsigned long long array[perulangan];
    for(unsigned long long i=0;i<perulangan;i++){
        scanf("%llu",&array[i]);
    }
    for(unsigned long long z=0;z<perulangan;z++){
        unsigned long long posisi,sumEnergy=1,arr[100],i=0;
        posisi=array[z];
        while(posisi!=1){
            arr[i]=posisi;
            i++;
            sumEnergy+=posisi;
            if(posisi%2==0){
                posisi=posisi/2;
            }else{
                posisi=(posisi-1)/2;
            }
        }
        printf("Suletta membutuhkan %llu power dengan path musuh yang perlu dikalahkan 1",sumEnergy);
        for(int j=i-1;j>=0;j--){
            printf("-%llu",arr[j]);
        }
        printf("\n");
    }
}
