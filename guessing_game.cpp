#include <iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

int main()
{
    int guess,number;
    cout<<"NUMBER GUESSING GAME !!"<<endl;
    cout<<"guess the number b/w 1 to 100"<<endl;

    srand(time(0));
    number=(rand()%100)+1;
    
    do
    {
        cout<<"guess the number :";
        cin>>guess;
        if (guess==number)
        {
            cout<<"great! you guess right ";
        }
        else if (guess < number)
        {
            cout<<"try a larger number,guess again"<<endl;
        }
        else
        {
            cout<<"try a smaller number ,guess again"<<endl;
        }

    } while(guess!=number);

    return 0;


}
