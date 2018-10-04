# [PARTY-115 A](http://codeforces.com/problemset/problem/115/A)

## PROBLEM EXPLANATION 

   - Each employee may or may not have immediate manager/suporior, inputted the index where the manager/superior supposed to be 
   - The employee that do not have an immeidate manager/superior is inputted `-1`
   - The company arrange a party. Whithin any single group, the employee and their own superior/manager in the same group. 
   
 With that being said, we are asked to find the minimum number of groups that will be formed in the party. 
 
 ## [SOLUTION](http://codeforces.com/submissions/kayleenp)
 
    for(int i=1;i<=employeeNum;i++)
     {
          cin>>employee[i];
      }
	  for(int i=1;i<=employeeNum;i++)
	   {
		 	int counter=1;
			int k=employee[i];
				while(k>0)
				{
						k=employee[k];
						counter++;
				}
				ans=max(ans,counter);

	}
    cout<<ans;

in this case, i use `for` looping because it seems like what we have to do to solve this case is to record all of the input (using array). and while  `k>0` where `k = employee[i]`, that employee[i] integer where the input is either the index of their manager or -1, will be recorded in a new index, which is index k. Example: 

     input :
     5
    -1
     1
     2
     1
    -1
    
    output : 
    3

So, for example, we take the employee[1] which is `1`, that means his superior is in index 0. 

With that being said, `k = 1 ` and while k>0, `-1 = employee[1].` and the `counter` increases. 

the `ans` is the largest integer between `ans` and `counter` for each loops until the  `for` looping is finished. 


# [CHRISTMAS PRUCE - 913B](http://codeforces.com/problemset/problem/913/B)

## PPROBLEM EXPLANATION

   Basically, there is a rooted tree where it has a root, vertex u (child of vertex v), vertex v (parent of vertex u), and a leaf (a vertex that doesn't have children and has a parent). We are asked to find out if the rooted tree is a spruce if its every non-leaf vertex has at least 3 leaf children, or not. The example of the input and output can be seen from the problem linked above. 
   
## [SOLUTION](http://codeforces.com/contest/913/submission/43742127)
The solution is explained by the code below :: 

	for(i=2; i<=spruceNum; i++)
    {
        cin>>roots[i]; // input the integer to show where is the root. 
	
       ++leaf[roots[i]]; 
       /* each integer inputted will be saved into new array, which is 
		leaf[roots[i]], means that in the array leaf in the index roots[i] that
		was inputted, will be increase to show how many is the child from the parent.*/     			
    }

    for(i=1; i<=spruceNum; i++)
    {
        if(!leaf[i])
        {
		/*if the leaf index has an empty array, then the counter for each index
		  inputted will be increase*/
		 /*the empty array shows how many leaf that non-leaf vertex have. */ 
            ++counter[roots[i]];
        }
    }
  	 for(i=1; i<=spruceNum; i++)
  	  {
        if(leaf[i] && counter[i]<3) /*if the leaf[i] is not empty and it has less than 3 'leaf'*/ 						/*the i index will keep counting as long as it did not enter the if condition*/ 
        {
            break; 
        }
 	   }

    if(i>spruceNum) 
    {
       cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }


# [REGISTRATION SYSTEM-4C](http://codeforces.com/problemset/problem/4/C)



## PROBLEM EXPLANATION 



	
   

 

