#include <stdio.h>
void case_A(long long n,long long hasil);
void case_B(long long n,long long hasil);
void case_C(long long n,long long hasil);

int main(){
    long long n;
    scanf("%lld",&n);
    char huruf[n];
    long long arr[n];
    for(long long i=0;i<n;i++){
        scanf("%lld %c",&arr[i],&huruf[i]);
    }
    for(long long i=0;i<n;i++){
        printf("Menampilkan... berhasil! ");
        switch (huruf[i]){
        case 'A':
            case_A(arr[i],1);
            break;
        case 'B':
            case_B(arr[i],1);
            break;
        case 'C':
            case_C(arr[i],1);
            break;
        }
        printf("\n");
    }
}
void case_A(long long n,long long hasil){
    if(n==-1){
        
    }else{
        printf("%lld;",hasil);
        case_A(n-1,2*hasil);
        case_A(n-1,2*hasil+1);
    }
}

void case_B(long long n,long long hasil){
    if(n==-1){
        
    }else{
        case_B(n-1,2*hasil);
        printf("%lld;",hasil);
        case_B(n-1,2*hasil+1);
    }
}

void case_C(long long n,long long hasil){
    if(n==-1){
        
    }else{
        case_C(n-1,2*hasil);
        case_C(n-1,2*hasil+1);
        printf("%lld;",hasil);
    }
}