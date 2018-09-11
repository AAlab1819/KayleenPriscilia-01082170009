# [SPYKE TALKS - A 291](http://codeforces.com/problemset/problem/291/A)
---------------------------------------------------------------------------------------------------------------------------------------

## Problem Explanation
According to the problem in part A-291, named spyke talks. Polycarpus wants to know how many of his assistants Spyking to each other, spyking to outside, or not spyking at all. 

## Solution
First thing that I did is to sort to make the job much more easier. Therefore, I use brick sorting, commonly known as odd-even sorting. 
  
     void brickSort (int arr[], int num)
     { bool sorted = false; 
    while(!sorted) // while the numbers is not sorted it will loop
    {
        sorted  = true; // the 'sorted' must always tagged to true, so when it checked and there are no
                            fulfilled if condition, it means the numbers are already sorted.
        
        for (int i=1; i<=num-2; i=i+2) // First it will sort on odd elements(it will take 2 numbers starting from odd element).
                                        If the the right one is smaller than the left one, it will swap. (similiar to Bubble sort)//
        {
            if(arr[i]>arr[i+1])
            {
                swap(arr[i], arr[i+1]); 
                sorted=false; // The 'sorted' is tagged as "false" if there are still if condition fulfilled
            }
        }
        for(int i=0; i<=num-2; i=i+2) // it will sort on the even elements. The rules are the same as odd one. 
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

After the sorting is done, the next step is to check if there are 2 same integer, or not. 

     for(int i=0; i<=secretaries_num;i++)
    {
        flag=i+2; // flag is at elements i+2 (used to check '-1' condition)
        if(spyke_id[i]==spyke_id[i+1] && spyke_id[i]!=0) (so, if there are two same integer and not more, and as long as the spyke_id 
                                                           not 0, the counter will increase.)//
        {
            counter++;
        } 
        if(spyke_id[i]==spyke_id[flag]&&spyke_id[i]!=0) (if there are more than 2 same integer and not zero, it will automatically set
                                                          the counter into -1 and stop the looping <break>)//
        {
            counter=-1;
            break;
        }
    }    
    cout << counter << endl; (print to the screen)
    }
    
   
## Code Forces Acceptance Prove   
![SpykeTalks](https://github.com/AAlab1819/KayleenPriscilia-01082170009/blob/master/Week02-Sorting/Spyke%20Talks.PNG?raw=true)
    

# [DRAGON - A230](http://codeforces.com/problemset/problem/230/A)

--------------------------------------------------------------------------------------------------------------------------------------
## Problem Explanation

For this task, I was asked to find out either Kirito will win or lose, by print out YES or NO. Before I do that, I shall input some integers, as follows:
- First line : Kirito's initial strength, how many dragons/level that Kirito wanted to beat (dragons_num). 
- Second line until dragons_num : Dragon's strength, the value of strength that Kirito will gain if he beats the dragon. 
In order to win the game, Kirito's strength must more than the dragon's strength. 

## Solution 

The first thing that I must do is to sort the dragon's strength from the smallest to the largest integer. The reason why I do that in particular is certainly because Kirita tend to fight the dragon by the weakest. I applied what is called Comb Sort for the sorting part of this coding. Basically, Comb Sort is an improvement over Bubble Sort.

    int getNextGap(int gap)
    {
       gap = (gap*10)/13; // For this type of sorting, the current gap (with the size of array as the initial gap)
                              always (gap*10)/13. //
       if(gap<1)
    {
        return 1;   
    }

    return gap;
    }
  
For Comb Sort, it has certain rules that is quite different than Bubble sort. First, Comb Sort compares two integers, same as the Bubble Sort, but, while bubble sort compare only between one integer and another one in the element next to it, Comb Sort uses what is called 'gap'. It will compares an integer with another integer with a certain gap of element(s). 

The Comb Sort function will be like this: 

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






  
