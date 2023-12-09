#include <stdio.h>
#include <string.h>
int main(){
    char masuk[105];
    scanf(" %s",masuk);
    int K;
    scanf("%d",&K);
    for(int i=0;i<strlen(masuk);i++){
        int a;
        a=masuk[i];
        a+=K;
        if(a>122){
            a=a-26;
        }
        masuk[i]=a;
    }
    printf("%s",masuk);
}