#include <stdio.h>

int main()
{
    unsigned long long N,M,YG,XG,YP,XP,jumlah_bayangan;
    unsigned long long sumG,sumP;
    //N adalah jumlah tabel ke kanan, M adalah jumlah tabel ke bawah
    //jika G dan P di koordinat C yang sama yang sama
    scanf("%llu%llu",&N,&M);
    scanf("%llu%llu%llu%llu",&YG,&XG,&YP,&XP);
    sumG=XG+YG;
    sumP=XP+YP;
    if(sumG==2||sumP==2){ //pojok kiri atas
        jumlah_bayangan=2;
    }else if((YG*XG==N*M)||(XP*YP==N*M)){ //pojok kanan bawah
        jumlah_bayangan=2;
    //pojok kiri bawah atau kanan atas
    }else if((YG==N&&XG==1)||(YP==N&&XP==1)){//pojok kanan atas
        jumlah_bayangan=2;
    }else if((YG==1&&XG==M)||(YP==1&&XP==M)){//pojok kiri bawah
        jumlah_bayangan=2;
    }else if(N==2||M==2){
        jumlah_bayangan=2;
    }
    else if (YG==1||XG==1||YP==1||XP==1||YG==N||YP==N||XP==M||XG==M){
        jumlah_bayangan=3;
    }else if(M==3||N==3){
        jumlah_bayangan=3;
    }else{
    jumlah_bayangan=4;
    }
    printf("Tch EZPZ, aku cuma butuh %llu bayangan biar gacor!",jumlah_bayangan);
    return 0;
}
