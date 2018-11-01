# [Kuriyama Mirae Stone - Problem 433B](http://codeforces.com/problemset/problem/433/B)

Submission :[http://codeforces.com/problemset/submission/433/45180793]

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

The solution to this problem can be found by first making an optimal list from the given list. If the price of 2 1L bottles is cheaper than 1 2L bottle, then it is optimal to buy 2 1L bottles instead, hence we will change the price of c[i] to c[i-1]. After doing so, we then realize that the price at the end will be the most bang for your buck, regardless of whether it is made up of smaller bottles or 1 bottle. Naturally, we may think that we just need to grab the bottle with the most bang for your buck then, however that may not be the case. It is possible that we may find cheaper alternatives with enough L of lemonade for our needs, and so we will compare the previous price and the current price to find the cheaper price. Current price can be calculated by adding sum(previous sum + bottles needed x price) + L(liter of lemonade needed left after subtracting L of bottles needed) x price. Bottles needed is the maximum amount of bottles i we can use to cover as much L of lemonade that is left, but not more than L. This will go on until we finally have our cheapest combination.

Submission : [ http://codeforces.com/problemset/submission/913/45180733] 

