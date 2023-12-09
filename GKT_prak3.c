#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    unsigned long long a0=0,a1=1,a2=2,an;
    unsigned long long arr[1005]={0,1,2};
    for(int i=3;i<=n;i++){
        an=a0+a1+a2;
        a0=a1%100;
        a1=a2%100;
        a2=an%100;
        arr[i]=an%100;
    }
    for(int i=n;i>=0;i--){
        printf("%llu ",arr[i]);
    }
    return 0;
}