---------------------------------------------------------------------------------------------------------------------------------------
# [SPYKE TALKS - A 291](http://codeforces.com/problemset/problem/291/A)

## Problem Explanation
According to the problem in part A-291, named spyke talks. Polycarpus wants to know how many of his secretaries Spyking to each other, spyking to outside, or not spyking at all. The Spyke network assign a unique ID to the call. If the secretaries are talking to each other, then the call ID will be the same positive integer. If the secretaries are not talking with Spyke at all, than the session number of the call is 0. Spyke conference aren't permitted, means that if there are more than 2 same integers that Polycarpus inputted, than there's must be a mistake and it will print an integer -1, means there are input error. 

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
So if there are same integers, since it is already sorted, the same integers will be automatically side by side. And if current spyke_id on index i is the same as spyke_id on index i+2, means that there are more than 2 same integer which will outputted as -1 immediately (using break). The console wont read 0 integer because of the condition spyke_id[i]!=0 in if condition which will not increase the counter or even initialize the counter as -1. 

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
    
   
## CodeForces Acceptance Prove   
![SpykeTalks](https://github.com/AAlab1819/KayleenPriscilia-01082170009/blob/master/Week02-Sorting/Spyke%20Talks.PNG?raw=true)
    
--------------------------------------------------------------------------------------------------------------------------------------
# [DRAGON - A230](http://codeforces.com/problemset/problem/230/A)

## Problem Explanation

For this task, I was asked to find out either Kirito will win or lose, by print out YES or NO. Before I do that, I shall input some integers, as follows:
- First line : Kirito's initial strength, how many dragons/level that Kirito wanted to beat (dragons_num). 
- Second line until dragons_num : Dragon's strength, the value of strength that Kirito will gain if he beats the dragon. 

In order to win each level of the game, Kirito's strength must more than the dragon's strength. 

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
    bool swapped = true; // initial boolean 'swapped' as true to tag that the integers are not sorted yet.
    while(gap!=1 || swapped == true) 
    {  
        gap = getNextGap(gap); // using the funtion to find the gap
        swapped = false; // to stop the looping if the integers are already sorted. 
        for (int i=0; i<n-gap; i++) // first integer to be check is from index 0 until n-gap
        { 
          if(a[i] > a[i+gap]) // if the first integer of index i is more than index (i+gap) it will swap. 
            {
                swap(a[i], a[i+gap]);
                swap(d[i], d[i+gap]); 
                swapped = true; // initialize bool. 
            } 
        }
    }
    }

  After the levels of dragon that Kirito wants to kill are already sorted, then the next step is quite simple. It is to check the condition if the dragons strength (level[i]) is less than Kirito strength then Kirito may gain strength that is already inputted by the user. 
  
   If Kirito's strength is more than the dragon's strength until i=dragons_num-1 (meaning last level/dragon of the game), Kirito wins. (PRINTED "YES"). 
    
   But, if Kirito's strength is less than the dragon's strength at a certain level then Kirito will automatically lose the game. Here are the codes for these conditions. 
  
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

## CodeForces Acceptance Prove

![Dragons](https://github.com/AAlab1819/KayleenPriscilia-01082170009/blob/master/Week02-Sorting/dragons.PNG?raw=true)
---------------------------------------------------------------------------------------------------------------------------------------
# [Oath Of the Night's Watch - A768](http://codeforces.com/problemset/problem/768/A)

## Problem Explanation
  
- There are (stewards_num) stewards and each have their own strength. 
- Jon Snow only likes to support a steward if there exists at least one steward who has strength strictly less than him and at least     one steward who has strength strictly greater than him.
- Input ::  stewards_num (stewards total) 
            strength[strewards_num] (strength for each steward) 
- So, the output must be the numbers of stewards Jon Snow will support. 

## Solution

As usual, what we do first is to sort, of course, to make the job easier for the dashing Jon Snow. In this case, I use ShellSort. It will start sorting with a big gap, and it will reduce the gap until the integers are sorted. 
    
    int shellSort (int arr[], int n)
    {
    for(int gap=n/2; gap>0; gap/=2) // gap intial is n/2 and the gap will decrease by gap/2.
    {
        for(int i=gap; i<n; i++) 
        {
            int temp = arr[i];  // save the value of arr[i] 
            
            for(int j=i; j>=gap && arr[j-gap]>temp; j-=gap) 
            {
                arr[j]=arr[j-gap]; // if the arr[j-gap] is more than temp /saved arr[i], then it will change arr[j] into arr[j-gap]
                
            }

                arr[j]=temp; // the arr[j] will be initialized with the temp/ saved arr[i]. So it will switch index.

        }
    }
    }

After the sorting is done, now we know that the first index of array is the smallest and the last index of array is the largest integer. Back to the explanation of the problem, Jon Snow will support steward as long as there are stewards with strength less than him and also at least one steward who has strength greater than him. So as long the certain steward's strength is more than strength[0] and less than strength[stewards_num], Jon Snow will be able to assist him.

    for(int i=0; i<stewards_num; i++)
    {

        if(strength[i]>strength[0] && strength[i]<strength[stewards_num-1])
        {
                counter++;
        }
    }

    cout << counter << endl;

## CodeForces Acceptance Prove

![Oath](https://github.com/AAlab1819/KayleenPriscilia-01082170009/blob/master/Week02-Sorting/Oath.PNG?raw=true)
