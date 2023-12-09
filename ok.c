#include <stdio.h>

int main()
{
    int h1,m1,s1,a,b,c,jam,h2,m2,s2;
    scanf("%d:%d:%d",&h1,&m1,&s1);
    scanf("%d jam %d menit %d detik",&a,&b,&c);
    scanf("%d",&jam);
    s2=s1+c;
    if(s2>59){
        s2%=60;
        b+=1;
    }
    m2=m1+b;
    if(m2>59){
        m2%=60;
        a+=1;
    }
    h2=h1+a+jam;
    if(h2>23){
        h2%=24;
    }
    printf("Kuki akan tiba pada pukul %d:%d:%d waktu setempat",h2,m2,s2);
    return 0;
}
