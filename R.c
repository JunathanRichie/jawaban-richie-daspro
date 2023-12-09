//BUAT 2 ARRAY
#include <stdio.h>
int main(){
    unsigned long long A, B,code=0,buzz_count=0,A_count=0,B_count=0,wuzz_count=0;
    unsigned long long arrayA[64],arrayB[64];
    for(long long i=0;i<64;i++){
        arrayA[i]=0;
        arrayB[i]=0;
    }
    scanf("%llu%llu",&A,&B);
    if(A%B==0||B%A==0){
        printf("Rizz");
        code=1;
    }else{
        printf("Not Rizz");
    }
    for(long long i=0;A>0;i++)    
    {    
        arrayA[i]=A%2;
        A=A/2;    
    }   
    for(long long i=0;B>0;i++)    
    {    
        arrayB[i]=B%2;
        B=B/2;    
    }
    for(long long i=0;i<64;i++){
        if(arrayA[i]==1){
            A_count+=1;
        }
        if(arrayB[i]==1){
            B_count+=1;
        }
        if(arrayA[i]==1&&arrayB[i]==1){
            buzz_count+=1;
        }
        if((arrayA[i]==0&&arrayB[i]==1)||(arrayA[i]==1&&arrayB[i]==0)){
            wuzz_count+=1;
        }
    }
    if(code==0){
        if(buzz_count==A_count||buzz_count==B_count){
            printf(", but Buzz!");
        }else if(wuzz_count==A_count+B_count){
            printf(", but Wuzz!");
        }
    }else{
        if(buzz_count==A_count||buzz_count==B_count){
            printf("Buzz");
        }else if(wuzz_count==A_count+B_count){
            printf("Wuzz");
        }
    }
}