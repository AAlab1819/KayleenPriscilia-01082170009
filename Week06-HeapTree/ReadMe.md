# [ROY AND TRENDING TOPICS](https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/roy-and-trending-topics-1/)

## Problem Explanation 
*the Z-score will change everyday according to the post, like, comment, and share value*

1. When a topic is mentioned in a 'Post', its z-score is increased by 50.
2. A 'Like' on such a Post, increases the z-score by 5.
3. A 'Comment' increases z-score by 10.
4. A 'Share' causes an increment of 20.

Input : 
First line : `number` of data
endl; 
Next line contains 6 space seperated number : `topicID`   `old_z_score `  `posts`  `like`  `comment`  `share`

Output: 
Print top 5 topics each in a new line according to the change in z-score starting to the highest change.
Each line should contain two space seperated integer. 
*If change in z-score for any two topics is same, then rank them according to their ID (one with higher ID gets priority). It is guaranteed that IDs will be unique.*

## Solution 

It is known that, 

        posts[i] = posts[i]*50;
        like[i] = like[i]*5;
        comment[i] = comment[i]*10;
        share[i] = share[i]*20;
And to find the `new_z[i]` and the `change[i]` in z score, jsust simply,

        new_z[i] =  posts[i] + like[i] + comment[i] +share[i] ;
        change[i] = new_z[i]-old_z_score[i];
               
In this particular case in finding the top 5 topics,  I use HeapSort (where the root's value has to be larger than the child's) to sort the change in z-score for each ID with the time complexity, 
- Best Case : Ω(n log(n))
- Average Case : Θ(n log(n))
- Worst Case : O(n log(n))
	
in the heapSort function, there are conditions where the `change[i]` needs to be swapped with a certain index. It need to be noted that not only the `change` is swapped, but so does the  `newZ` and the `id` to indicates which id and newZ that have the "change" in the output later. 
    
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
 
And dont forget, *If change in z-score for any two topics is same, then rank them according to their ID (one with higher ID gets priority). It is guaranteed that IDs will be unique.* For this condition simply swap the `change[i]`, `new_z[i]`, and `topicID[i]` if the  `topicID[i]` is larger than `topicID[j]`.
    
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
    

#[Find the Running Median](https://www.hackerrank.com/challenges/ctci-find-the-running-median/problem)

## Problem Explanation 
Input : Data number ( `dataNum`) 
	`data[i]` 
Output : the median for each data[length] 

The problem basically asked user to output the median for each data input. 

	Example : 
	3 
	2 ( 2 || median = 2) 
	3 (2 3 || median = (2+3)/2)
	1 (1 2 3 || median = (2) )

## Solution 

1. First thing that had to be done is to sort the data for each input. To sort the data, I use heapSort. 
2. Since for every input it needed to be sort, the heapSort must be inside the `for` looping after user input an integer. 
3. There are 2 condition. First, if the length of the data is odd and if the length is even. If the length is odd, then it simply just need to take the middle index to get the median. However, if the length is even, then there are no middle index. Example:
	data : 1 2 3 4 
	middle index : index 2 and index 3 
So, we need to find the mean of the middle index that have 2 integer. In this case, i use the formula, `median[j](data[i/2]+data[i/2+1])/2;` to find the median. 
4. The median that has been found, will be saved in other array, which is `median[]`. 

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
    
4. the precision of the output is 1. 

  	 for(int i=0; i<dataNum; i++)
   	 {
          cout << setprecision(1) << fixed; // to set the float precision into 1
          cout << median[i] << endl;
   	 }
	





