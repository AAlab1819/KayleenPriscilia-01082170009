** [Buttons - 268 B](http://codeforces.com/problemset/problem/268/B)

*Problem Explanation 

The problem asked to give output of how many worst probibilty the buttons are pressed. If the right button is pressed then it will stay pressed. But if Manao pressed the wrong button, all the buttons are resetted, which means, all the buttons will unpressed and Manao have to start from the beginning. 


*Solution 

So, for example, if there are 3 buttons, then, 

- Button 1  : 3 + 1
- Button 2  : 2  
- Button 3  : 1  

Worst Scenario = 7 times of pressing

#SecondExample = The code have 4 buttons, then 

- Button 1 : 4 + 2 + 1
- Button 2 : 3 + 1 
- Button 3 : 2 
- Button 4 : 1 

#ThirdExample = 5 buttons code. 

- Button 1 : 5 + 3 + 2 + 1
- Button 2 : 4 + 2 + 1
- Button 3 : 3 + 1
- Button 4 : 2 
- Button 5 : 1

as you can see, for each button-pressed possibility, there are a sequence, which is 

1, 2 , 4, 7, 11, .... 

for each number, it is added by 1, 2, 3, 4, .... 

for example, 

1, (+1) 2 , (+2) 4, (+3) 7, (+4) 11, .....

and the number of times that Manao has to push the buttons in the worst scenario is 
to sum all of the sequence from 1 until the numbers of button that are available. 

for example, 
The number of buttons is 4, then Manao has to push the buttons ( 1+ 2+ 4+ 7 = 14 ) times. 

In this case for the `sequence` number , I use recursive function below :

     int pressed_code(int code_amount )
      {
      if (counter<=code_amount)
       {
       sequence = counter+ sequence;
       counter++;
       pressed_code(code_amount);
       }

      return sequence;
      }
   
    
and to sum all of the sequence, I use `for` loop. 




