#include <bits/stdc++.h>
using namespace std;
int main()
{
	int dataNum;
	cin>>dataNum;
	map<string,int>mp;

	for(int i=0;i<n;i++)
        {
	    string word;
        cin>>word;
		if(mp[word]==0)
		{
		    cout<<"OK"<<endl;
		}

		else cout<<word<<mp[word]<<endl;
		mp[word]++;
		}
	return 0;
}
