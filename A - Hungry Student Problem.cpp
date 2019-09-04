#include<iostream>
using namespace std;

int main ()
{
    int t,x;

    cin >> t;

    while(t--)
    {
        cin >> x;

        if (x%3 == 0 || x%7 == 0 || x%7 == 3 || x>11)
            cout << "YES\n";
        else
        cout << "NO\n";
    }

    return 0;
}
