#include<iostream>
#include<algorithm>

using namespace std;

int shellSort (int arr[], int n)
{
    for(int gap=n/2; gap>0; gap/=2)
    {
        for(int i=gap; i<n; i+=1)
        {
            int temp = arr[i];

            int j;

            for(j=i; j>=gap && arr[j-gap]>temp; j-=gap)
            {
                arr[j]=arr[j-gap];
            }

                arr[j]=temp;

        }
    }
}


int main()
{
    int stewards_num;
    cin >> stewards_num;
    int strength[stewards_num];
    int counter=0;


    for(int i=0; i<stewards_num; i++)
    {
        cin >> strength[i] ;
    }

    shellSort(strength, stewards_num);


    for(int i=0; i<stewards_num; i++)
    {

        if(strength[i]>strength[0] && strength[i]<strength[stewards_num-1])
        {
                counter++;
        }
    }

    cout << counter << endl;

}
