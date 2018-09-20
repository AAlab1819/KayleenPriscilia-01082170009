#include<iostream>

using namespace std;

int main()
{
   int levels; // all levels
   int levels_x; // levels for little x
   int levels_y; // levels for little y

   int counter=0;
   int levelsComb; // the amount of little x's and little y's levels combination




   cin >> levels;
   int levelsArr[levels];

   for (int i=0; i<levels; i++)
   {
       levelsArr[i]=i+1; // to initialize which levels are available
   }

   cin >> levels_x;
   int little_x[levels_x];

   for(int i=0; i<levels_x;i++)
    {
        cin >> little_x[i]; // levels that little_x could pass.

    }

    cin >> levels_y;
    int little_y[levels_y];
    levelsComb = levels_x+levels_y;

    int all_levels[levelsComb];




    /* initialize the combination of little_x and little_y's levels in all_levels array*/
     for(int i=0; i<levels_x;i++)
    {
        all_levels[i]=little_x[i];
    }
    for(int i=levels_x; i<levelsComb;i++)
    {
        cin >> little_y[i];
        all_levels[i]=little_y[i];
    }
    /* the index is from level_x index until levelsComb
       so that it can build an array of all level combinations
       that little_x and little_y can pass */


    /*check if there are certain levels that either little_x or little_y can pass */
     for(int i=0; i<levels;i++)
    {
        for(int j=0; j<levelsComb; j++)
        {
            if(i+1==all_levels[j])
            {
               levelsArr[i] = false;
            /*if the are levels that can be passed, that particular
              level will be 'flag' into false.*/
            }

        }
    }

    for(int i=0; i<levels; i++)
    {
       if(levelsArr[i]!=false)
       {
           counter++;  // to count how many levels both of them cannot pass.
       }
    }

    if(counter>0)
    {
        cout << "Oh, my keyboard!" << endl;

    }
    else if(counter==0)
    {
        cout << "I become the guy." << endl;
    }
}
