#include<stdio.h>

int main()
{
    long long int b,k,i,a,s=0;

    while(scanf("%lld%lld",&b,&k)==2)
    {
        s=0;
        for(i=1; i<k; i++)
        {
            scanf("%lld",&a);
            if((a*b)%2!=0)
                s++;
        }
        scanf("%lld",&a);
        if(a%2==1)
            s++;
        if(s%2==1)
            printf("odd\n");
        else
            printf("even\n");

    }
    return 0;
}
