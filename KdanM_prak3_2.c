#include <stdio.h>
//a*b mod C
long long pangkat(long long n,long long m);
int main(){
    long long a,b,c;
    while(scanf("%lld %lld %lld",&a,&b,&c)!=EOF){
        a=a%c;
        long long res=1;
        while (b>0){
            res=(res*a)%c;
            b--;
        }
        printf("%lld\n",res);
    }
}
long long pangkat(long long n,long long m){
    if(m==1){
        return m;
    }else{
        return n*pangkat(n,m-1);
    }
}