#include <bits/stdc++.h>
using namespace std;
int main()
{
	int dataNum;
	cin>>dataNum;
	map<string,int>mp;

	for(int i=0;i<dataNum;i++)
        {
	    string name;
        cin>>name;
		if(mp[name]==0)
		{
		    cout<<"OK"<<endl;
		}

		else cout<<name<<mp[name]<<endl;
		mp[name]++;
		}
	return 0;
}
