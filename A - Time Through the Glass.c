#include<stdio.h>

int main()
{
    int m,h;

    while(scanf("%d%d",&h,&m)==2)
    {

        if(m==0)
            m=60;

        if(h==0)
            h=12;

        h=12-h;
        m=60-m;
        printf("%d %d\n",h,m);
    }
    return 0;
}
