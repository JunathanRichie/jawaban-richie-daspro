#include <stdio.h>
#include <string.h>

int main()
{
    char str[1030],strbaru[1030];
    int angka_arr[3]={0,0,0},n=0,angka=1;
    int posisi_angka_terakhir=0,posisi_i=0,posisi_j=0,kode_jalur=100,panjang_yg_dicari=0;
    int count_atas=1,count_atas_kanan=1,count_kanan=1,count_bawah_kanan=1,count_bawah=1,count_bawah_kiri=1,count_kiri=1,count_atas_kiri=1;
    gets(str);
    for(int i=strlen(str);i>=0;i--){
        if(str[i]>='0'&&str[i]<='9'){
            angka_arr[n]=str[i]-48;
            posisi_angka_terakhir=i+n;
            n+=1;
        }
    }
    for(int i=0;i<strlen(str);i++){
        strbaru[i]=str[i+posisi_angka_terakhir+1];
    }
    angka=100*angka_arr[2]+10*angka_arr[1]+angka_arr[0];
    char matriks[angka*2][angka*2];
    for(int i=0;i<angka*2;i++){
        char strisi[205];
        gets(strisi);
        for(int k=0;k<strlen(strisi);k++){
            matriks[i][k]=strisi[k];
        }
    }
    panjang_yg_dicari=angka;
    if(strlen(strbaru)<panjang_yg_dicari){
        panjang_yg_dicari=strlen(strbaru);
    }
    for(int i=0;i<angka*2;i++){
        for(int j=0;j<angka*2;j++){
    count_atas=1,count_atas_kanan=1,count_kanan=1,count_bawah_kanan=1,count_bawah=1,count_bawah_kiri=1,count_kiri=1,count_atas_kiri=1;
            int k=0;
            if(strbaru[k]==matriks[i][j]){
                if(panjang_yg_dicari==1){
                    kode_jalur=8;
                    posisi_i=i;
                    posisi_j=j;
                }
                for(k=1;k<panjang_yg_dicari;k++){
                    //cek ke atas
                    if(strbaru[k]==matriks[i-k][j]){
                        count_atas+=1;
                        if(count_atas==panjang_yg_dicari){
                            posisi_i=i;
                            posisi_j=j;
                            kode_jalur=0;
                        }
                    }
                    //cek ke atas kanan
                    if(strbaru[k]==matriks[i-k][j+k]){
                        count_atas_kanan+=1;
                        if(count_atas_kanan==panjang_yg_dicari){
                            posisi_i=i;
                            posisi_j=j;
                            kode_jalur=1;
                        }
                    }
                    //cek ke kanan
                    if(strbaru[k]==matriks[i][j+k]){
                        count_kanan+=1;
                        if(count_kanan==panjang_yg_dicari){
                            posisi_i=i;
                            posisi_j=j;
                            kode_jalur=2;
                        }
                    }
                    //cek ke bawah kanan
                    if(strbaru[k]==matriks[i+k][j+k]){
                        count_bawah_kanan+=1;
                        if(count_bawah_kanan==panjang_yg_dicari){
                            posisi_i=i;
                            posisi_j=j;
                            kode_jalur=3;
                        }
                    }
                    //cek ke bawah
                    if(strbaru[k]==matriks[i+k][j]){
                        count_bawah+=1;
                        if(count_bawah==panjang_yg_dicari){
                            posisi_i=i;
                            posisi_j=j;
                            kode_jalur=4;
                        }
                    }
                    //cek ke bawah kiri
                    if(strbaru[k]==matriks[i+k][j-k]){
                        count_bawah_kiri+=1;
                        if(count_bawah_kiri==panjang_yg_dicari){
                            posisi_i=i;
                            posisi_j=j;
                            kode_jalur=5;
                        }
                    }
                    //cek ke kiri
                    if(strbaru[k]==matriks[i][j-k]){
                        count_kiri+=1;
                        if(count_kiri==panjang_yg_dicari){
                            posisi_i=i;
                            posisi_j=j;
                            kode_jalur=6;
                        }
                    }
                    //cek ke atas kiri
                    if(strbaru[k]==matriks[i-k][j-k]){
                        count_atas_kiri+=1;
                        if(count_atas_kiri==panjang_yg_dicari){
                            posisi_i=i;
                            posisi_j=j;
                            kode_jalur=7;
                        }
                    }
                }
            }
        }
    }
    char matriks_hasil[angka*2][angka*2];
    for (int i=0;i<angka*2;i++){
        for(int j=0;j<angka*2;j++){
            matriks_hasil[i][j]='.';
        }
    }
    if(kode_jalur==0){
        for(int k=0;k<panjang_yg_dicari;k++){
            matriks_hasil[posisi_i-k][posisi_j]=matriks[posisi_i-k][posisi_j];
        }
    }
    if(kode_jalur==1){
            for(int k=0;k<panjang_yg_dicari;k++){
                matriks_hasil[posisi_i-k][posisi_j+k]=matriks[posisi_i-k][posisi_j+k];
            }
    }
    if(kode_jalur==2){
            for(int k=0;k<panjang_yg_dicari;k++){
                matriks_hasil[posisi_i][posisi_j+k]=matriks[posisi_i][posisi_j+k];
            }
    }
    if(kode_jalur==3){
            for(int k=0;k<panjang_yg_dicari;k++){
                matriks_hasil[posisi_i+k][posisi_j+k]=matriks[posisi_i+k][posisi_j+k];
            }
    }
    if(kode_jalur==4){
            for(int k=0;k<panjang_yg_dicari;k++){
                matriks_hasil[posisi_i+k][posisi_j]=matriks[posisi_i+k][posisi_j];
            }
    }
    if(kode_jalur==5){
            for(int k=0;k<panjang_yg_dicari;k++){
                matriks_hasil[posisi_i+k][posisi_j-k]=matriks[posisi_i+k][posisi_j-k];
            }
    }
    if(kode_jalur==6){
            for(int k=0;k<panjang_yg_dicari;k++){
                matriks_hasil[posisi_i][posisi_j-k]=matriks[posisi_i][posisi_j-k];
            }
    }if(kode_jalur==7){
            for(int k=0;k<panjang_yg_dicari;k++){
                matriks_hasil[posisi_i-k][posisi_j-k]=matriks[posisi_i-k][posisi_j-k];
            }
    }
    if(kode_jalur==8){
            matriks_hasil[posisi_i][posisi_j]=matriks[posisi_i][posisi_j];
    }
    if(kode_jalur>=0&&kode_jalur<=8){
        for (int i=0;i<angka*2;i++){
            for(int j=0;j<angka*2;j++){
                printf("%c",matriks_hasil[i][j]);
            }
            if(i==angka*2-1){
                break;
            }else{
            printf("\n");
            }
        }
    }else{
        printf("404 NOT FOUND\n");
    }
    return 0;
}
