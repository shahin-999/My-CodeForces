#include<iostream>
using namespace std;

int main()
{
    string st;
    int i,n,a=0;

    cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>st;
            if(st[0]=='+'||st[1]=='+')
                a++;
            else
                a--;
        }
        cout<<a<<endl;
        a=0;


    return 0;
}
