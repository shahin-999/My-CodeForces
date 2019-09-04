#include<stdio.h>

int main()
{
    long long int n,x,cunt;
    while(scanf("%lld",&n)==1){
            cunt=0;
        while(n!=0){

            if(n%10==4 || n%10==7)
                cunt++;
            n=n/10;
        }
        if(cunt==4 || cunt==7)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
