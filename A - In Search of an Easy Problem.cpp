#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,sum=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sum+=n;
    }
    if(sum==0)
        cout<<"EASY\n";
    else
        cout<<"HARD\n";
}
