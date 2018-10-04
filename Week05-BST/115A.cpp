#include <iostream>
#include <math.h>

using namespace std ;

int main ()
{
    int employeeNum ,ans;
	cin>>employeeNum;

	int employee[employeeNum];


	for(int i=1;i<=employeeNum;i++)
    {
        cin>>employee[i];
    }
	for(int i=1;i<=employeeNum;i++)
	{
			int counter=1;
			int k=employee[i];
				while(k>0)
				{
						k=employee[k];
						counter++;
				}
				ans=max(ans,counter);

	}
cout<<ans;

 return 0;
}
