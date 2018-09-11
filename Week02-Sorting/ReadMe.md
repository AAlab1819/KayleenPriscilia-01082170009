# SPYKE TALKS
## A 291 
### http://codeforces.com/problemset/problem/291/A
------------------------------------------------------------------------------------------------------------------------------------------
According to the problem in part A-291, named spyke talks. Polycarpus wants to know how many of his assistants Spyking to each other, spyking to outside, or not spyking at all. 

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
    
    ![image](
    
--------------------------------------------------------------------------------------------------------------------------------------
# DRAGON 
# A 230
--------------------------------------------------------------------------------------------------------------------------------------
For this task on number A 230, "DRAGON". 



  
