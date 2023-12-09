#include <stdio.h>
//a*b mod C
long long pangkat(long long n,long long m,long long o);
int main(){
    long long a,b,c;
    while(scanf("%lld %lld %lld",&a,&b,&c)!=EOF){
        printf("%lld\n",pangkat(a,b,c));
    }
}
long long pangkat(long long n,long long m,long long o){
    long long hasil=1;
    n=n%o;
    while(m>0){
        if(m%2==1){
            hasil=(n*hasil)%o;
        }
        n=(n*n)%o;
        m/=2;
    }
    return hasil;
}