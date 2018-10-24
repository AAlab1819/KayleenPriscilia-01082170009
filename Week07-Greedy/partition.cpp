#include<bits/stdc++.h>
using namespace std;

int main()
{

int n;
int a;
int part=0;
cin >> n;

while (n>0)
{
   cin>>a;

   part = part+ abs(a);

   n--;

}

cout << part << endl;
}
