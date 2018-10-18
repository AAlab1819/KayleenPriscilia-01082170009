// C++ program for implementation of Heap Sort
#include <iostream>
#include<iomanip>
#include<algorithm>

using namespace std;

/*DO THE HEAP SORT*/

void heapify(float arr[], int n, int i)
{
    int largest = i;
    int l = 2*i + 1;
    int r = 2*i + 2;


    if (l < n && arr[l] > arr[largest])
        largest = l;


    if (r < n && arr[r] > arr[largest])
        largest = r;


    if (largest != i)
    {
        swap(arr[i], arr[largest]);


        heapify(arr, n, largest);
    }
}


void heapSort(float arr[], int n)
{

    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);


    for (int i=n-1; i>=0; i--)
    {

        swap(arr[0], arr[i]);


        heapify(arr, i, 0);
    }
}

/*DO THE HEAP SORT*/

int main()
{
    int dataNum;
   cin  >> dataNum;
    float data[dataNum];

    float median[dataNum];
    int j=0;
    for(int i=0; i<dataNum; i++)
    {
        cin >> data[i];
        heapSort(data, i+1); //do heap sort every time data is inputted

        if (i%2==0 )
        {
            /*if the data number so far is odd, then
            the median will be at the n(as data number)/2*/

            median[j] = data[i/2];
            j++;
        }
        if(i%2!=0 )
        {
            /*if the data number so far is even, then
            the median will be at the the sum of two data in
            the middle index (n/2+(n/2+1)) divided by 2 */

            median[j]= (data[i/2]+data[i/2+1])/2;
            j++;
        }
    }

    for(int i=0; i<dataNum; i++)
    {
        cout << setprecision(1) << fixed; // to set the float precision into 1
        cout << median[i] << endl;
    }
}

