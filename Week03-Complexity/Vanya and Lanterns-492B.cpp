#include<iostream>
#include<algorithm>
#include<iomanip>

using namespace std;


int insertionSort(int arr[], int n)
{
    int i;
    int key;
    int j;

    for (i=1; i<n; i++)
    {
        key = arr[i];
        j=i-1;

        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1] = key;
    }
}

int main()
{
    int lanterns_num;
    int length;

    cin >>lanterns_num;
    cin >>length;

    int points[lanterns_num];
    double maxGap;
    int distance;
    int gap[lanterns_num];

    double gap_head;
    double gap_tail;
    double gap_headOrTail;

    double gapNums=lanterns_num-1;
    double radius;

    for(int i=0; i<lanterns_num; i++)
    {
        cin>>points[i];
    }

    insertionSort(points, lanterns_num);

    for(int i=0; i<lanterns_num; i++)
    {
        distance = (points[i+1]-points[i])-1;
        /* initialize the distance/gap from point to point of the lanterns*/

        gap[i]=distance;
        /*initialize all the distance into gap[] array*/
    }


    /*do insertion sort on gap array to know which one is the largest gap */
    insertionSort(gap, gapNums);

    maxGap = gap[lanterns_num-2]; // the maximum gap will automatically at the last index
    radius=(maxGap+1)/2;          // find the radius
    gap_head = points[0] - 0 ;     // find the gap from the point 0 to the first lantern's point.
    gap_tail = length - points[lanterns_num-1]; /* find the gap from the last point of the lantern
                                                    to the last point of the street*/


    /* Find the biggest gap between gap_head and gap_tail*/
    if(gap_head>=gap_tail)
    {
        gap_headOrTail= gap_head;
    }
    else if(gap_tail>gap_head)
    {
        gap_headOrTail = gap_tail;
    }

    /*  if the gap_headOrTail is larger than the radius between 2 lanterns,
        than it will choose gap_headOrTail since the radius of the light
        has to cover the entire street. So if we choose the radius over
        the gap_headOrTail, it wont lighten the street from point 0 or the last
        point of the street. So, the gap_headOrTail is prioritized.  */

    if(gap_headOrTail >= radius)
    {
        cout << setprecision(10) << fixed;
        cout << gap_headOrTail << endl;

    }
    else if (gap_headOrTail < radius)
    {
        cout << setprecision(10) << fixed;
        cout << radius << endl;

    }

}





