#include<stdio.h>

int main()
{
    int a,b,x,n,i;

    while(scanf("%d",&n)==1)
    {
        a=0;b=0;
        for(i=0;i<n;i++){
            scanf("%d",&x);
            if(x<=0)
                b+=x;
            else
                a+=x;
        }
        x=a-b;
        printf("%d\n",x);

    }

    return 0;
}
