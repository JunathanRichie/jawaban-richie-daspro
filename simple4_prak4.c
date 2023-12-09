#include <stdio.h>
#include <string.h>

struct data{
    char nama[35];
    char nrp[25];
    char angkatan[6];
    char asal[60];
    char umur[6];
};

void print_data(struct data arr,int i){
    printf("Nama Mhs-%d\t: %s\n", i, arr.nama);
    printf("NRP Mhs-%d\t: %s\n", i, arr.nrp);
    printf("Angkatan Mhs-%d\t: %s\n", i, arr.angkatan);
    printf("Umur Mhs-%d\t: %s\n", i, arr.umur);
    printf("Asal Mhs-%d\t: %s\n\n", i, arr.asal);
}

void swap(char* str1, char* str2)
{
    int len1 = strlen(str1);
    char temp[100];
    for(int i=0; i<=len1; i++)
    {
        if(i==len1){
            temp[i]='\0';
            break;
        }
        temp[i] = str1[i];
    }
    int len2 = strlen(str2);
    for(int i=0;i<=len2;i++){
        if(i==len2){
            str1[i]='\0';
            break;
        }
        str1[i] = str2[i];
    }
    for(int i=0; i<=len1; i++)
    {
        if(i==len1){
            str2[i]='\0';
            break;
        }
        str2[i] = temp[i];
    }
}

int main(){
    int n;
    scanf("%d ",&n);
    struct data arr[n];
    for(int i=0;i<n;i++){
        gets(arr[i].nama);
        gets(arr[i].nrp);
        gets(arr[i].angkatan);
        gets(arr[i].asal);
        gets(arr[i].umur);
    }
    while(1){
        int choice=0;
        scanf("%d",&choice);
        if(choice==1){
            int kode=0;
            char cari[100];
            scanf(" %s",cari);
            printf("===== HASIL PENCARIAN =====\n");
            for(int i=0;i<n;i++){
                if(strstr(arr[i].nama,cari)!=NULL){
                    print_data(arr[i],i);
                    kode=1;
                    continue;
                }else if(strstr(arr[i].nrp,cari)!=NULL){
                    print_data(arr[i],i);
                    kode=1;
                    continue;
                }else if(strstr(arr[i].angkatan,cari)!=NULL){
                    print_data(arr[i],i);
                    kode=1;
                    continue;
                }else if(strstr(arr[i].umur,cari)!=NULL){
                    print_data(arr[i],i);
                    kode=1;
                    continue;
                }else if(strstr(arr[i].asal,cari)!=NULL){
                    print_data(arr[i],i);
                    kode=1;
                    continue;
                }
            }
            if(kode==0){
                printf("DATA TIDAK DITEMUKAN\n\n");
            }
        }else if(choice==2){
            int tuker1,tuker2;
            scanf(" %d %d",&tuker1,&tuker2);
            swap(arr[tuker1].nama,arr[tuker2].nama);
            swap(arr[tuker1].nrp,arr[tuker2].nrp);
            swap(arr[tuker1].angkatan,arr[tuker2].angkatan);
            swap(arr[tuker1].asal,arr[tuker2].asal);
            swap(arr[tuker1].umur,arr[tuker2].umur);
        }else if(choice==3){
            char tuker[20];
            int tuker1,tuker2;
            scanf(" %s %d %d",tuker,&tuker1,&tuker2);
            if(strcmp(tuker,"nama")==0){
                swap(arr[tuker1].nama,arr[tuker2].nama);
            }else if(strcmp(tuker,"nrp")==0){
                swap(arr[tuker1].nrp,arr[tuker2].nrp);
            }else if(strcmp(tuker,"angkatan")==0){
                swap(arr[tuker1].angkatan,arr[tuker2].angkatan);
            }else if(strcmp(tuker,"asal")==0){
                swap(arr[tuker1].asal,arr[tuker2].asal);
            }else if(strcmp(tuker,"umur")==0){
                swap(arr[tuker1].umur,arr[tuker2].umur);   
            }
        }else if(choice==-1){
            printf("===== DATA MAHASISWA =====\n");
            for(int i=0;i<n;i++){
                print_data(arr[i],i);
            }
            break;
        }
    }
}