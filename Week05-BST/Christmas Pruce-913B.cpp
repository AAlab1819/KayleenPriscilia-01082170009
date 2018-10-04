#include<iostream>
#include<stdlib.h>

using namespace std;
  int roots[1000];
  int leaf[1000];
  int counter[1000];
  int i;
  int spruceNum;

int main()
{

     cin>>spruceNum;

    for(i=2; i<=spruceNum; i++)
    {
        cin>>roots[i];
       ++leaf[roots[i]];
    }


    for(i=1; i<=spruceNum; i++)
    {
        if(!leaf[i])
        {

            ++counter[roots[i]];
        }
    }

    for(i=1; i<=spruceNum; i++)
    {
        if(leaf[i] && counter[i]<3)
        {
            break;
        }
    }
    if(i>spruceNum)
    {
       cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }


    return 0;
}


