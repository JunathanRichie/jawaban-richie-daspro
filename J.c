#include <stdio.h>

void fungsiPointer(long long *a, long long *b,long long *c,long long *d,long long *e){
    *b=*a%*b;
    *d=*c * *d;
    *e=(*b+*d)%*e;
}
int main(){
    long long testcase;
    scanf("%lld",&testcase);
    for(long long i=0;i<testcase;i++){
        long long a,b,c,d,e;
        scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
        fungsiPointer(&a,&b,&c,&d,&e);
        printf("%lld\n",e);
    }
}