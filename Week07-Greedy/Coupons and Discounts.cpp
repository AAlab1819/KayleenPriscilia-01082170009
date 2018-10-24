#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a;
    int r=0;
    for(int i=0; i<n; i++)
    {
        cin >> a;
        a=a-r;
        cout << "a =" << a << endl;
        if(0>a)
        {
            cout << "BREAK" << endl;
            break;
        }
        r=a%2;
        cout << "r = "<< r << endl;
    }
    if(r)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }


}
