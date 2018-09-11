#include<iostream>
#include<stdlib.h>

using namespace std;


int getNextGap(int gap)
{
    gap = (gap*10)/13;
    if(gap<1)
    {
        return 1;
    }

    return gap;
}

void combSort (int a[], int d[], int n)
{
    int gap = n;
    bool swapped = true;

    while(gap!=1 || swapped == true)
    {
        gap = getNextGap(gap);

        swapped = false;

        for (int i=0; i<n-gap; i++)
        {
            for(int j=0; j<2; j++)
            {
            if(a[i] > a[i+gap])
            {
                swap(a[i], a[i+gap]);
                swap(d[i], d[i+gap]);
                swapped = true;
            }
            }
        }
    }
}
int main()
{
   int krito_initial_strength;
   int dragons_num;

   cin >> krito_initial_strength;
   cin >> dragons_num;

    int plus_strength[dragons_num];
   int level[dragons_num];

   for(int i=0; i<dragons_num; i++)
   {
        cin >> level[i];
        cin >> plus_strength[i];

   }

   combSort(level, plus_strength, dragons_num);
   cout << endl;

   for(int i=0; i<dragons_num; i++)
   {
       if(level[i]<krito_initial_strength)
       {
           krito_initial_strength=krito_initial_strength+plus_strength[i];
           if(i==dragons_num-1)
           {
               cout << "YES" << endl;
           }
       }
       if(level[i]>=krito_initial_strength)
       {
           cout << "NO" << endl;
           break;
       }

   }




}


