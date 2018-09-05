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

    cin >> sum;

    while(randomNum>randomDen || randomNum+randomDen!=sum || randomNum%randomDen==0 || randomDen%randomNum==0)
    {
      randomNum = rand()%sum+1;
      randomDen = rand()%sum+1;
    }
    cout << randomNum << " " << randomDen << endl;



}
