#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    long long isi_n[n];
    for(int i=0;i<n;i++){
        scanf("%lld",&isi_n[i]);
    }
    if(n==1){
        printf("%lld",isi_n[0]);
    }else if(n==2){
        long long beda;
        beda=isi_n[1]-isi_n[0];
        printf("%lld",isi_n[1]+beda);
    }else if(n==3){
        long long beda1a,beda1b,beda2;
        beda1a=isi_n[1]-isi_n[0];
        beda1b=isi_n[2]-isi_n[1];
        beda2=beda1b-beda1a;
        printf("%lld",isi_n[2]+beda2+beda1b);
    }else if(n==4){
        long long beda1a,beda1b,beda1c,beda2a,beda2b,beda3;
        beda1a=isi_n[1]-isi_n[0];
        beda1b=isi_n[2]-isi_n[1];
        beda1c=isi_n[3]-isi_n[2];
        beda2a=beda1b-beda1a;
        beda2b=beda1c-beda1b;
        beda3=beda2b-beda2a;
        printf("%lld",isi_n[3]+beda3+beda2b+beda1c);
    }else if(n==5){
        long long beda1a,beda1b,beda1c,beda1d,beda2a,beda2b,beda2c,beda3a,beda3b,beda4;
        beda1a=isi_n[1]-isi_n[0];
        beda1b=isi_n[2]-isi_n[1];
        beda1c=isi_n[3]-isi_n[2];
        beda1d=isi_n[4]-isi_n[3];
        beda2a=beda1b-beda1a;
        beda2b=beda1c-beda1b;
        beda2c=beda1d-beda1c;
        beda3a=beda2b-beda2a;
        beda3b=beda2c-beda2b;
        beda4=beda3b-beda3a;
        printf("%lld",isi_n[4]+beda4+beda3b+beda2c+beda1d);
    }
}