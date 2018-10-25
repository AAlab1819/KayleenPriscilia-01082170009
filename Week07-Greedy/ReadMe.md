# PROBLEM 946A-PARTITION

## [Problem Explanation](http://codeforces.com/problemset/problem/946/A)
1. You may partition the sequence. (ex : partition : A and B)
2. Find the sum for each partition part (sum of A part, and B part)
3. Find the maximum possible value of A-B. (greedy part)

## [Solution](http://codeforces.com/contest/946/submission/44818191)

To find the maximum possible value of A-B, simply just add each integer in the sequence. Since there might be a 'minus' integer, we must use `abs(a)`  convert minus integer into plus integer.
WHY?
because if there are any minus integer, it is best to make the partition sequence for all minus integer (B) and also for all positive integer (A). At the end, it will be summed anyway. Example: 

    1 2 4 -3 -5 3
    Partition A = 1 2 4 3 
    Partition B = -3 -5
    Sum of A    = 8 
    Sum of B    = -8 
    Value of A-B = 16 (maximum)
    
    equals to 
    
    abs(a) + abs(B) = maximum value of A-B.
    
so, in this case I use this implementation: 

    while (n>0)
    {
     cin>>a;
     part = part+ abs(a);
     n--;
    }
    

# PROBLEM 978B - FILE NAME 

## [Problem Explanation](http://codeforces.com/problemset/problem/978/B)

1. If the `n` char(s) string has more than 2 `x` in a row, then we must print how many `x` that need to be removed in order to make it less than 3.

## [Solution](http://codeforces.com/contest/978/submission/44818220)

Basically, everytime there are more than 2 `x` in a row, it will increase the `counter`. 
      
    for (int i=0; i<n; i++)
    {

        if(fileName[i]=='x' && fileName[i+1]=='x' && fileName[i+2]=='x' )
        {
             counter++;
        }

    }
    
Example : 

xxxxiii    
 1.    `x(fileName[i])`   `x(fileName[i+1])`    `x(fileName[i+2])`  `x`  `i`   `i`   `i`  --> counter=1; 
 2.    `x`   `x(fileName[i])`   `x(fileName[i+1])`    `x(fileName[i+2])`  `i`   `i`   `i` --> counter=2; 
 3.    `x`   `x`   `x(fileName[i])`    `x(fileName[i+1])`  `i(fileName[i+2])`   `i`   `i` --> counter not increases (counter = 2)
 4.    `x`   `x`   `x`    `x(fileName[i])`  `i(fileName[i+1])`   `i(fileName[i+2])`   `i` --> counter not increases (counter = 2)
 5.    `x`   `x`   `x`    `x`  `i(fileName[i])`   `i(fileName[i+1])`   `i(fileName[i+2])` --> counter not increases (counter = 2)
 6.    `x`   `x`   `x`    `x`  `i`   `i(fileName[i])`   `i(fileName[i+1])` --> counter not increases (counter = 2)
 7.    `x`   `x`   `x`    `x`  `i`   `i`   `i(fileName[i])` --> counter not increases (counter = 2)
 
 # PROBLEM 731B - Coupons and Discounts
 
 ## [Problem Explanation](http://codeforces.com/problemset/problem/731/B)
 
- Teams plan to train for n times during n consecutive days. During the training session Sereja orders exactly one pizza for each     team that is present this day. He already knows that there will be ai teams on the i-th day.
- The first discount works if one buys two pizzas at one day, while the second is a coupon that allows to buy one pizza during two consecutive days (two pizzas in total).
- If it is possible to use the coupons and discount for all `n` consecutive days for each team that is present, print "YES". Otherwise, print "NO".

## [Solution](http://codeforces.com/contest/731/submission/44818162)
    
Basically, the coupons and discount both involve 2 pizza. So, for each input, `a` will be decrease by `r` the remainder of `a%2`. If the `a` is less than 0, then it is not possible to use the coupons or discounts, so it breaks from the loop immediately, and printed "NO". If from i=0 until i=n-1, the a is not less than 0, then it will printed "YES".  

       for(int i=0; i<n; i++)
       {
        cin >> a;
        a=a-r; //
        cout << "a =" << a << endl;
        if(0>a)
        {
            cout << "BREAK" << endl;
            break;
        }
        r=a%2;
        cout << "r = "<< r << endl;


