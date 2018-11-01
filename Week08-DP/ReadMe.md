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

Submission : [ http://codeforces.com/problemset/submission/913/45180733] 

The idea is to find the smallest cost of roubles as possible with the required volume. In order to find the minimum amount of roubles: 

	for (i = 0; i<n; i++)
	{
		cin >> a[i];
		if (i)
      a[i] = min(a[i - 1] * 2, a[i]); // using the formula 2^(i - 1) to find the volume in each index and find the smallest element. 
	}
	for (i = n - 1; i >= 0; i--) // checking from the last element of array
	{
		d = (1 << i); c += a[i] * (l / d); // parsing
		l %= d;
		s = min(s, c + (l != 0)*a[i]); // find the smalles cost of roubles with the required volume
	}
	cout << s;
