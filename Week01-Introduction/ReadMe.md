# PROBLEM A-912
# TRICKY ALCHEMY
____________________________________
The problem explained that Grisha wants to produce yellow, green and also blue balls. In order to produce the balls, it needs crystals with each of the followings: 	

        

a yellow ball need	: 2 yellow crystals 

a green ball need 	: 1 blue crystal + 1 yellow crystal 

a blue ball need 	: 3 blue crystals

Grisha wants to know how many additional disposal she needs in order to produce the balls she wants to acquire.

for this specific problem, I use while-looping for each yellow, green, and blue balls that she liked to produce. 

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
    
and then, the yellow crystals 
