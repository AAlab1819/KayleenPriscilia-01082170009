#include<iostream>
#include<stdlib.h>

using namespace std;

void brickSort (int arr[], int num)
{

    bool sorted = false;

    while(!sorted)
    {
        sorted= true;

        for (int i=1; i<=num-2; i=i+2)
        {
            if(arr[i]>arr[i+1])
            {
                swap(arr[i], arr[i+1]);
                sorted=false;
            }
        }
        for(int i=0; i<=num-2; i=i+2)
        {
            if(arr[i]>arr[i+1])
            {
                    swap(arr[i], arr[i+1]);
                    sorted=false;

            }
        }


    }

    return;
}

int main()
{
    int secretaries_num;
    int counter=0;
    int flag=0;
    cin >> secretaries_num;

    int spyke_id[secretaries_num];

    for(int i=0; i<secretaries_num; i++)
    {
        cin >> spyke_id[i];
    }


    brickSort(spyke_id, secretaries_num);


    for(int i=0; i<secretaries_num;i++)
    {
        flag=i+2;
        if(spyke_id[i]==spyke_id[i+1] && spyke_id[i]!=0)
        {
            counter++;
        }
        if(spyke_id[i]==spyke_id[flag]&&spyke_id[i]!=0)
        {
            counter=-1;
            break;
        }
    }
    cout << counter << endl;
}
