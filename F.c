//TUKAR TAMBAH
#include <stdio.h>
#include <string.h>
int main(){
    long long N;
    scanf("%lld",&N);
    char hp[N][11];
    for(long long i=0;i<N;i++){
        scanf(" %s",hp[i]);
    }
    long long swap;
    scanf("%lld",&swap);
    for(long long i=0;i<swap;i++){
        char hp1[11],hp2[11];
        scanf(" %s %s",hp1,hp2);
        long long index1=-1,index2=-1;
        for(long long j=0;j<N;j++){
            if(strcmp(hp1,hp[j])==0){
                index1=j;
            }
            if(strcmp(hp2,hp[j])==0){
                index2=j;
            }
        }
        if(index1==-1||index2==-1){}
        else{
        char temp[11];
        strcpy(temp,hp[index1]);
        strcpy(hp[index1],hp[index2]);
        strcpy(hp[index2],temp);
        }
    }
    for(long long i=0;i<N;i++){
        printf("%s\n",hp[i]);
    }
}