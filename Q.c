#include <stdio.h>
#include <string.h>
void chartobiner(char a){
    int arr[8];
    for(int i=0;i<8;i++){
        arr[8-1-i]=a%2;
        a/=2;
    }
    for(int i=0;i<8;i++){
        printf("%d",arr[i]);
    }
}
void binertochar(char biner[8]){
    int two_counter=1;
    int sum=0;
    for(int i=7;i>=0;i--){
        if(biner[i]=='1'){
            sum+=two_counter;
        }
        two_counter*=2;
    }
    printf("%c",sum);
}
int main(){
    int choice;
    scanf("%d ",&choice);
    if(choice==1){
        char isi;
        while(scanf("%c",&isi)!=EOF){
            chartobiner(isi);
        }
    }else if(choice==-1){
        char isi[2001];
        while(gets(isi)!=NULL){
        for(int i=0;i<strlen(isi);i+=8){
            char arrbaru[8];
            for(int j=i;j<i+8;j++){
                arrbaru[j-i]=isi[j];
            }
                    binertochar(arrbaru);
            }
        }
    }
}