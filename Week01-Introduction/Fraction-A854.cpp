#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main()
{

    int randomNum;
    int randomDen;
    int sum;
    srand(time(NULL));
    randomNum = rand()%sum;
    randomDen = rand()%sum;

    int counterNum;
    while(sum<3 || sum>10000)
    {
        cin >> sum;
    }

    for (int i=2 ; i<sum; i++)
    {

        while(randomNum>=randomDen || randomNum+randomDen!=sum || (randomDen%i==0&&randomNum%i==0))
        {

            randomDen=rand()%sum+1;
            randomNum=rand()%sum+1;
        }

    }

    cout << randomNum << " " << randomDen << endl;

}



