#include <stdio.h>
#include <string.h>
int main(){
    long long n,KPK,hitung,hari,max=0;
    scanf("%lld",&n);
    long long arr[n];
    for (int i=0;i<n;i++){
        scanf("%lld",&arr[i]);
    }
    char str[15];
    scanf("%s",&str);
    for(int j=0;j<n;j++){
        if(max<arr[j]){
            max=arr[j];
        }
    }
    for(long long i=1;;i++){
        hitung=1;
        KPK=max*i;
        for(long long i=0;i<n-1;i++){
            if(KPK%arr[i]==0){
                hitung+=1;
            }
        }
        if(hitung==n){
            break;
        }
    }
    if(strstr(str,"Minggu")!=0){
        hari=1;
    }else if(strstr(str,"Senin")!=0){
        hari=2;
    }else if(strstr(str,"Selasa")!=0){
        hari=3;
    }else if(strstr(str,"Rabu")!=0){
        hari=4;
    }else if(strstr(str,"Kamis")!=0){
        hari=5;
    }else if(strstr(str,"Jumat")!=0){
        hari=6;
    }else if(strstr(str,"Sabtu")!=0){
        hari=7;
    }
    hari=(hari+KPK)%7;
    if(hari==1){
        printf("Minggu");
    }else if(hari==2){
        printf("Senin");
    }else if(hari==3){
        printf("Selasa");
    }else if(hari==4){
        printf("Rabu");
    }else if(hari==5){
        printf("Kamis");
    }else if(hari==6){
        printf("Jumat");
    }else if(hari==0){
        printf("Sabtu");
    }
}
