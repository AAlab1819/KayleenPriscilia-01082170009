# [Kuriyama Mirae Stone - Problem 433B](http://codeforces.com/problemset/problem/433/B)

Submission : [http://codeforces.com/contest/433/submission/45155992] 

In this case, I use 2 array, `arr1` and `arr2` . After that, i sort `arr2` so that the cost of stone will be sorted from the smallest cost into the largest cost, to be summed later on. I did not sort 'arr1'. So `arr1` is for the unsorted array and the `arr2` is for the sorted array. Then, user inputted the question's number, `m` and following the questions, `x` (type) , `y` (l), `z` (r). The problem said,  If type equal to 1, then you should output the answer for the first question, else you should output the answer for the second one." So,
  
      if(x==1) // unsorted array
    {
        if(y==1)
            res=arr[z-1];

        else
            res= arr[z-1]-arr[y-2];  // do the formula
    }
    else // sorted array
    {
        if(y==1)
            res=arr2[z-1];
        else
            res= arr2[z-1]-arr2[y-2]; // do the formula
    }


# [Party Lemonade- Problem 913C](http://codeforces.com/problemset/problem/913/C)

Submission : 
