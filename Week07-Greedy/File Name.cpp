#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string fileName;
    int counter=0;
    cin >> fileName;

    for (int i=0; i<n; i++)
    {

        if(fileName[i]=='x' && fileName[i+1]=='x' && fileName[i+2]=='x' )
        {
             counter++;
        }

    }

    cout << counter << endl;
}
