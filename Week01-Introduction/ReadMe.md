# PROBLEM A-912
# TRICKY ALCHEMY
____________________________________
The problem explained that Grisha wants to produce yellow, green and also blue balls. In order to produce the balls, it needs crystals with each of the followings: 	

        

a yellow ball need	: 2 yellow crystals 

a green ball need 	: 1 blue crystal + 1 yellow crystal 

a blue ball need 	: 3 blue crystals

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
        
