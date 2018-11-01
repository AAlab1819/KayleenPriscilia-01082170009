#include <bits/stdc++.h>

using namespace std;
int main()
{

int n,m,x,y,z;

cin>>n;

long long arr[n],arr2[n],res;

for(int i=0;i<n;i++)
{
cin>>arr[i];
arr2[i]=arr[i];
}

sort(arr2,arr2+n);
for(int i=1;i<n;i++)
{
arr[i]+=arr[i-1];
arr2[i]+=arr2[i-1];
}

cin>>m;
while(m--)
{
cin>>x>>y>>z;
if(x==1)
    {
        if(y==1)
            res=arr[z-1];

        else
            res= arr[z-1]-arr[y-2];
    }
else
    {
        if(y==1)
            res=arr2[z-1];
        else
            res= arr2[z-1]-arr2[y-2];
    }
cout<<res<<endl;
}

    return 0;
}
