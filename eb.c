#include <stdio.h>

int main()
{
    int faktorial,sum=0,n=1;
    scanf("%d",&faktorial);
    faktorial=faktorial-faktorial%5;
    for(int i=0;;i++){
        if(faktorial<5*n){
            break;
        }
        sum+=faktorial/(5*n);
        n*=5;
    }
    if(sum%2==0){
        printf("Mantap bang!!");
    }else{
        printf("Hadeh, kenapa ganjil sih!");
    }
    return 0;
}
