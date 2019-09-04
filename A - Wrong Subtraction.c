#include<stdio.h>

int main()
{
    long int num;
    int x,i;
    while(scanf("%ld",&num)==1)
    {
        scanf("%d",&x);
        for(i=0;i<x;i++)
        {
            if(num%10==0)
                num=num/10;
            else
                num-=1;
        }
        printf("%ld\n",num);
    }
return 0;
}
