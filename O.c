#include <stdio.h>

long long gcd(long long a, long long b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int main(){
    long long n,m,result;
    scanf("%lld %lld",&n,&m);
    result=gcd(n,m);
    long long digit=0;
    while(result!=0){
        result/=10;
        digit+=1;
    }
    if(digit%2==0){
        printf("Yey brankas berhasil dibuka :D");
    }else{
        printf("Yah gagal :(");
    }
}