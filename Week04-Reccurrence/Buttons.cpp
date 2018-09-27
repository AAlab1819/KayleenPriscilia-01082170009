#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

int counter = 0;
int hasil = 1;

int pressed_code(int code_amount )
{
    if (counter<=code_amount)
    {
    hasil = counter+ hasil;
    counter++;
    pressed_code(code_amount);
    }

return hasil;
}

int worstCase (int code_amount)
{
    int worst_case=0;

    for (int i=0; i<code_amount; i++)
    {
      worst_case = worst_case + pressed_code(i);
    }
    cout << worst_case << endl;
}
int main()
{
    int code_amount;
    int pressed_worstCase;

    cin >> code_amount;
    worstCase(code_amount);

    return 0;
}
