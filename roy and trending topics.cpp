
#include <iostream>

using namespace std;


void heapify(int arr[], int id[], int newZ[], int n, int i)
{
    int largest = i; // initialize largest as root
    int l = 2*i + 1; // indicates as left
    int r = 2*i + 2; // indicates as right


    // if left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;

    // if right child is larger than largest so far
    if (r < n && arr[r] > arr[largest])
        largest = r;

    // if largest is not root
    if (largest != i)
    {
        swap(arr[i], arr[largest]); // swap the 'change in z-score' integer in the array
        swap(id[i], id[largest]); // swap the id
        swap(newZ[i], newZ[largest]); // swap the 'newZ' integer


        heapify(arr, id, newZ, n, largest);
    }
}


void heapSort(int arr[], int id[], int newZ[], int n)
{
    //build heap
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, id, newZ, n, i);


    for (int i=n-1; i>=0; i--)
    {

        swap(arr[0], arr[i]); // swap the 'change in z-score' integer in the array
        swap(newZ[0], newZ[i]); // swap the 'newZ' integer
        swap(id[0], id[i]); // swap the 'id' integer


        // call max heapify on the reduces heap
        heapify(arr, id, newZ, i, 0);
    }
}


void printArray(int arr[], int new_Z[], int n)
{
    for (int i=n-1; i>n-6; --i)
    {
        cout << arr[i] << " ";
        cout << new_Z[i] << " ";

        cout << endl;
    }



}

int main()
{
    int number;
    cin >> number;
    int topicID[number];
    int like[number];
    int comment[number];
    int posts[number];
    int share[number];
    int old_z_score[number];
    int new_z[number];
    int change[number];

    for (int i=0; i<number; i++)
    {
        cin >> topicID[i];
        cin >> old_z_score[i];
        cin >> posts[i];
        cin>> like[i];
        cin >> comment[i];
        cin >> share[i];
        posts[i] = posts[i]*50;
        like[i] = like[i]*5;
        comment[i] = comment[i]*10;
        share[i] = share[i]*20;

    }

    for (int i=0; i<number; i++)
    {
        new_z[i] =  posts[i] + like[i] + comment[i] +share[i] ;
        change[i] = new_z[i]-old_z_score[i];
    }

    heapSort (change, topicID, new_z, number);

    /*condition for if the change in z-score for any topics is the same*/
    /*rank them according to their ID*/

    for (int i=0; i<number; i++)
    {
        for(int j=i+1; j<number; j++)
        {
            if(change[i] == change[j])
            {
                if(topicID[i]>topicID[j])
                {
                    swap(topicID[i], topicID[j]);
                    swap(change[i], change[j]);
                    swap (new_z[i], new_z[j]);
                }
            }
        }
    }
    printArray(topicID,new_z, number);
}
