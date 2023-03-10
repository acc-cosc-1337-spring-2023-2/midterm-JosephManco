#include "question1.h"

int main()
{
    int fibnum; char cont;
    do
    {
    cout<<"Enter number: ";
    cin>> fibnum;
    if(fibnum < 1 || fibnum > 15)
    {
        cout <<"Please enter an number between 1 and 15 \n";
    }
    else
    {
        cout<<"Fibonacci Series: "<<get_fib_sequence(fibnum)<<"\n";
    }
    cout<<"Continue(Y/N)?: ";
    cin>>cont;
    }
    while(cont != 'N' && cont != 'n');
    return 0;
}