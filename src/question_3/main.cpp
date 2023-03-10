#include "question3.h"
int main()
{
char cont; int sold;
do
{
    cout<<"Enter number of widgets sold: ";
    cin>>sold;
    cout<<"Points earned "<<get_earned_points(sold)<<"\n";
    cout<<"Continue(Y/N)?: ";
    cin>>cont;
}
while(cont != 'N' && cont != 'n');
return 0;
}