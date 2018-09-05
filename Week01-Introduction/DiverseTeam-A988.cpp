#include<iostream>

using namespace std;


int main()
{
    int student_total;
    int TeamMembers_num;
    int maximum=0;
    int counter=0;

    cin >> student_total >> TeamMembers_num;
    int rating[student_total];

    for(int j=0; j<student_total; j++)
    {
        cin >> rating[j];
    }


    for (int i=0; i<student_total; i++)
    {
        for(int a=i+1; a<=student_total; a++)
        {
            if(rating[i]==rating[a])
            {
                rating[a] = false;
            }
        }
       if(rating[i]!=false)
       {
           counter++;
       }
    }


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

    else
    {
        cout << "NO" << endl;
    }

}
