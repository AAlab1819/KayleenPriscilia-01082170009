#include<iostream>

using namespace std;

int main()

{
    int dragons_num;
    int fryingPan;
    int tailShut;
    int pawsTrampled;
    int panic;
    int counter=0;


    cin >> fryingPan;
    cin >> tailShut;
    cin >> pawsTrampled;
    cin >> panic;

    cin >> dragons_num;

    for (int i=0; i<=dragons_num;  i++)
    {
        /*Check if there are any integers from 0 to dragons_num that cannot be divided by fyingPan,
            tailShut, pawsTrampled, and panic integers*/

        if((i%fryingPan!=0 && i%tailShut!=0&&i%pawsTrampled!=0 && i%panic!=0))
        {
            counter++;
        }

        /*this is for the wrong input condition where the input of fryingPan, tailShut, pawsTrampled,
            and panic are more than dragons_num */
         if(fryingPan>dragons_num || tailShut>dragons_num || pawsTrampled>dragons_num || panic>dragons_num)
            {
                if((i%fryingPan!=0 && i%tailShut!=0&&i%pawsTrampled!=0 && i%panic!=0))
                {
                    counter=dragons_num;
                }

            }

    }
    cout << dragons_num-counter << endl;
    /*dragons_num-counter since what we are looking for are integers that can be divided by
        tailShut, pawsTrampled,fryingPan, and panic integers*/


}

        //complexity
        //worse case = O(N)
        //average case = O(N)
        //best case = O(N)


