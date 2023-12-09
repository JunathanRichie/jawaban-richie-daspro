#include <stdio.h>
#include <math.h>
int main()
{
    char C;
    float R,H,M,S,posisi_jam,posisi_menit,sudut,L,K;
    scanf("%c",&C);
    scanf("%f",&R);
    scanf("%f:%f:%f",&H,&M,&S);
    /*1 jam = 60 menit, jarak antara 1 jam itu 360/12=30 derajat
    kalau 1 menit gerak,
    jam bergerak 0.5 derajat
    jarum menit 0-360
    1 menit = 6 derajat
    gerak 1 detik = 0.1 derajat
    1 menit=60 detik
    jarum jam=posisi jam itu+perubahan akibat menit
             =30*jam+0.5*menit
    posisi menit=menit+perubahan akibat detik
                =6*menit+0.1*detik
    */
    if(H>12){
        H-=12;
    }
    posisi_jam=(30*H)+(0.5*M);
    posisi_menit=(6*M);
    if(posisi_jam>posisi_menit){
        sudut=posisi_jam-posisi_menit;
    }else{
        sudut=posisi_menit-posisi_jam;
    }

    if(sudut>180){
        L=sudut/360*M_PI*R*R;
        K=(sudut/360*M_PI*2*R)+2*R;
        sudut=360-sudut;
    }else{
        float sudut_besar;
        sudut_besar=360-sudut;
        L=sudut_besar/360*M_PI*R*R;
        K=(sudut_besar/360*M_PI*2*R)+2*R;
    }
    if(C=='L'){
        printf("%.2f derajat %.2f m2",sudut,L);
    }else{
        printf("%.2f derajat %.2f m",sudut,K);
    }
}
