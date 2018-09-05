# PROBLEM A-912
# TRICKY ALCHEMY
____________________________________
The problem explained that Grisha wants to produce yellow, green and also blue balls. In order to produce the balls, it needs crystals with each of the followings: 	

        

> a yellow ball need	: 2 yellow crystals 

> a green ball need 	: 1 blue crystal + 1 yellow crystal 

> a blue ball need 	: 3 blue crystals

Grisha wants to know how many additional disposal she needs in order to produce the balls she wants to acquire.

for this specific problem, I use while-looping for each yellow, green, and blue balls that she liked to produce. 

(lets say Grisha wants to make 2 yellow balls, 1 green ball, and 1 blue ball, which needs 4 yellow crystals for yellow balls, 1 yellow crystal and 1 blue crystal for green balls, and lastly, 3 blue crystals for the blue ball. So the total of the crystals that Grisha needs 9.)

    while(yellow_prod>0) // yellow_prod represents yellow balls that Grisha plans to produce. 
    {
        yellow = yellow+2;  
        yellow_prod--; 
    }
    
    
The yellow crystals that Grisha's should acquire will increase by two crystals and one ball of yellow_prod will reduce for each looping which means two yellow balls needed everytime yellow_prod decrease as long as yellow_prod is more than 0.
Same rules acquires to green_prod, and blue_prod. 

     while (green_prod>0)
    {
        yellow++;
        blue++;
        green_prod--;
    }
    
    while(blue_prod>0)
    {
        blue=blue+3;
        blue_prod--;
    }
    
    
and then, all the yellow and blue crystals that will needed will be summed and the result will be substract with the total of crystals disposal that Grisha already had. 


        production = produce - disp_total;
        
        
Grisha already has 7 crystals in her disposal. And the total of crystal that Grisha needs are 9. So, the addition of crystals that Grisha should acquire is 2 more crystal. 

-------------------------------------------------------------------------------------------------------------------------------------
# PROBLEM A-854
# FRACTION 
-------------------------------------------------------------------------------------------------------------------------------------

This problem enquires how to find a fraction, which consists a numerator and denominator. 
However, there are several conditions that must be followed:

> Numerator<denominator 

> Numerator and denominator do not have positive common divisor except 1

> the sum of Numerator and denominator must generate the *input* integer. 


Thus, I use for and while-looping for this particular problem. 
        
         for (int i=2 ; i<sum; i++)
    {

        while(randomNum>=randomDen || randomNum+randomDen!=sum || (randomDen%i==0&&randomNum%i==0))
        {

            randomDen=rand()%sum+1;
            randomNum=rand()%sum+1;
        }

    }
 
The purpose of using the *for-looping* is to generate number from 2 to the amount of the sum (the input) <since every number can be divided by 1, thats why I use 2 as the starting value of integer> , to check if the both numerator and denominator that are currently random numbers, can be divided by integer 2 until *sum*. If both parties can be divided by a certain integer, than it will generate random numbers for both numerator and denominator using *while-looping*. 

Same condition will acquire if the numerator is more than denominator, and also if numerator plus denominator not equal to the input integer (*sum*). 

In the one of the *while* parameter, I use:

        (randomDen%i==0&&randomNum%i==0)
        
Which means that the *while* condition will proceed if both the denominator and numerator can be divided with the current counter (2 until *sum*).

For the conclusion, it will generate random numbers until it finds the numerator and denominator that qualified the conditions that must be followed according to the requirements.

# PROBLEM A-988
# DIVERSE TEAM
-----------------------------------------------------------------------------------------------------------------------------
For this problem called *Diverse Team* I use an array to know the number of position and value in a certain position. 
According to the problem, they liked to form a certain number of students (TeamMembers_Num) in a team with each have to has different ratings < rating[student_total] >

the amount of student is inputted, as well as the amount of student in one team that they want to form and also the ratings for each of them. 

they liked to know if it is possible to form a group with certain amount of student and which student will be able to be in the team. 

therefore, the first thing I did is to check whether there are same ratings or not. I use 2 variables as a *flag* for comparison using *for looping*. 

        
    for (int i=0; i<student_total; i++)
    {
        for(int a=i+1; a<student_total; a++)
        {
            if(rating[i]==rating[a])
            {
                rating[a] = false;
            }
        }
       if(rating[i]!=false)
       {
           counter++; // to count how many different ratings in the class.
       }
    }


The idea is to use first variable which is 'i' as a main *flag* to compare with the value at 'a' position. 'a' is always at i+1 because 'i' compares the value in the different position. For example, 'i' is currently in 0 array and it will compare with the value in 'a' position which started in array 1, 2, and so on until 'a' hit the student_total. Next, 'i' will move into array 1 and making comparison with the value of 'a' starting in array number 2, etc.

If the value in 'i' position equals to the value in 'a' position, the value will become *false* to flag which rating[a] value has the same position as the rating[i] value. 

        if(counter>=TeamMembers_num)
    {
        cout <<"YES" << endl;
        for(int i=0; i<student_total; i++)
        {
            if(rating[i]!=false && maximum<TeamMembers_num)
            {
                cout << i+1 << " ";
                maximum++;
            }
        }
    }
    
If the amount of different number is equal or more than student(s)/team, than it is possible to make a team consisting TeamMembers_num. 
Then, it will print the position of the NOT false value in TeamMembers_num amount of position. 


        
