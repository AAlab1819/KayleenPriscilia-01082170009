#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    long long  yellow_disp; // number of yellow ball(s) that is/are in Grisha's disposal.
    long long  blue_disp; // number of blue ball(s) that is/are in Grisha's disposal.
    long long  yellow_prod; // number of yellow crystal that Grisha want to make.
    long long  blue_prod; // number of blue crystal that Grisha want to make.
    long long  green_prod; // number of green crystal that Grisha want to make.
    long long  produce;
    long long  production; // number of crystal that Grisha should acquire
    long long  disp_total; // total balls in Grisha's disposal.
    long long  yellow = 0;
    long long  blue =0;


    cin >> yellow_disp >> blue_disp;
    cin >> yellow_prod >> green_prod >> blue_prod;

    while (yellow_prod>0)
    {
        yellow = yellow + 2;
        yellow_prod--;
    }

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

    disp_total = yellow_disp + blue_disp;
    produce = blue + yellow;
    production = produce - disp_total;

    production = abs(production);

    cout << production << endl;



}

