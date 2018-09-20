# [Vanya and The Lanterns - 492 B](http://codeforces.com/problemset/problem/492/B)

## Problem Explanation

This problem asked for the solution to find the minimum light radius of the lanterns so that the lanterns can light the whole street. 

- Input    : the amount of lanterns ( `lanterns_num`), the length of the street (`length`)
- Output   : the minimum light radius of the lanterns. 

After that, the best, average, and worse case of complexity must be calculated. 

## Solution 

[**Submission**](http://codeforces.com/contest/492/submission/43117428)

- Worst Case 		:: O(N^2) (Since I use insertion sort)
- Average Case 	:: Θ(N^2)
- Best Case 		:: Ω(N)

# [Insomnia Cure - 148 A](http://codeforces.com/contest/148/problem/A)

## Problem Explanation

It is basically asked to count how many multiples of the integers based on the inputs.

Input 	: 
- the k-th dragon that got punched. (`fryingPan`)
- the l-th dragon that got his tail shut. (`tailShut`)
- the m-th dragon that got his paws trampled. (`pawsTrampled`)
- the n-th dragon that panicked. (`panic`)
- the number of dragons that the princess should fight. (`dragons_num`)

Output : 
- the number of damaged dragons (the multiplies of `k`, `l`, `m`, and `n`)

Same with the first problem, the complexity including the best, average, and worst case also must be calculated.

## Solution

[**Submission**](http://codeforces.com/contest/148/submission/43116253)

- Worst Case 		:: O(N) 
- Average Case 	:: Θ(N) 
- Best Case 		:: Ω(N)


# [I Wanna Be The Guy - 469 A](http://codeforces.com/contest/469/problem/A)

## Problem Explanation

A game that consisting n levels. `little_x` and `little_y` are working together on completing all the levels. So, little X can pass the levels that little Y can pass, so is the otherwise, since, again, they are cooperate each other. So, the output will be whether `I become the guy.` if they can pass all levels, and `Oh, my keyboard!` if they cannot. 

Input 	:
- Number of levels (`levels`)
- Numbers of levels that little x can pass and which levels. (`little_x[]`)
- Numbers of levels that little y can pass and which levels. (`little_y[]`)

Output 	:
- `I become a guy.` or `Oh, my keyboard!` . 

## Solution 

[**Submission**](http://codeforces.com/contest/469/submission/43115919)
- Worst Case 		:: O(N^2) (because I use nested for loops) 
- Average Case 	:: Θ(N^2) 
- Best Case 		:: Ω(N^2)



