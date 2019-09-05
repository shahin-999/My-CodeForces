
#include<iostream>
using namespace std;
 
 
int main()
{
    int i,j,ar[1001],m,n,x,y,a,b,c,s=0;
 
    cin >> m >> n;
 
    for (i=0; i<m; i++)
    {
        cin >> ar[i];
 
        if (ar[i] <= n)
            s++;
        else
            s+=2;
    }
 
    cout << s << endl;
 
    return 0;
}
