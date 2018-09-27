#include<iostream>
#include<stdlib.h>

using namespace std;

#define N 100
#define M 100
int counter =0;
int indexCounter;

void floodFillUtil (char screen[M][N], int x, int y)
{
    if(x<0||x>=M||y<0||y<0||y>=N)
    {
        return;
    }
    if(screen[x][y])
    {
        return;
    }

    if(screen[x][y]=='*')
    {
        counter++;
        return;
    }

    screen[x][y] = 1;

    floodFillUtil(screen, x+1, y);
    floodFillUtil(screen, x-1, y);
    floodFillUtil(screen, x, y+1);
    floodFillUtil(screen, x, y-1);

    screen[x][y] = indexCounter;

}


int main()
{
   int row, col, start_point,index;
   int counterTot[start_point];

   cin >> row >> col >> start_point;

   int startingPoint[start_point][2];

   char screen[M][N];

    int rowInput;
    int colInput;

   for (int i=0; i<row; i++)
   {
       for (int j=0; j<col; j++)
       {
           cin >> screen[i][j];
       }
   }

    indexCounter=index;
   for(index=0; index<start_point; index++)
   {
       cin >> rowInput >> colInput;
       if(!screen[rowInput-1][colInput-1])
       {
           counter=0;
           indexCounter++;
           floodFillUtil(screen, rowInput-1, colInput-1);
           counterTot[indexCounter]=counter;

       }

       cout << counterTot[screen[rowInput-1][colInput-1]]<< endl;

   }

   return 0;
}
