#include<stdio.h>

int main()
{
    int q,i,j;
    long long int n,ans,a,b,x;
    scanf("%d",&q)==1;
    for(j=0;j<q;j++)
    {
            scanf("%lld %lld %lld",&n,&a,&b);

               if(2*a>=b)
               {
                   if(n%2!=0)
                   {
                       x=n/2;
                       ans=x*b+a;
                   }

                   else
                   {
                       x=n/2;
                       ans=x*b;
                   }
               }

               else if(2*a<b)
               {
                   ans=n*a;
               }



            printf("%lld\n",ans);


    }

return 0;}
