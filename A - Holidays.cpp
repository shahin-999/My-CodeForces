#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,mn,mx;
    cin>>m;

    if(m%7<2)
    {
        mn=m/7*2;
        mx=mn+(m%7);
    }
    else if(m%7>1 && m%7<6)
    {
        mn=m/7*2;
        mx=mn+2;
    }
    else if(m%7==6)
    {
        mn=m/7*2+1;
        mx=mn+1;
    }

    cout<<mn<<" "<<mx<<endl;

    return 0;
}
