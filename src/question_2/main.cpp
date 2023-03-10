#include "question2.h"
int main()
{
    int cookies_to_bake;
    char choice;
do {
    cout<<"Enter the number of cookies to bake: ";
    cin>>cookies_to_bake;
    if(cookies_to_bake <= 1){
        cout<<"Invalid Number of Cookies, please enter a number greater than 0";
        continue;
    }
    auto ingredients = get_cookie_ingredients(cookies_to_bake);

    cout<<"Cups of sugar: " << ingredients[0] << "\n";
    cout<<"Cups of butter: " << ingredients[1] << "\n";
    cout<<"Cups of flour: " << ingredients[2] << "\n";
    cout <<"\n";
    cout<<"Press 'q' to quit or any other button to continue: ";
    cin>>choice;
}
while(choice != 'q');
    return 0;
}