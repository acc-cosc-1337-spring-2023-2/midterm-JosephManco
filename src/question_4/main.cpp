#include "question4.h"
int main()
{
    int value;
    string binary;
    char choice;
    do {
        cout<< "Enter an integer between 1 and 255: ";
        cin >> value;
        
        if (value < 1 || value > 255)
        {
            cout<<"Invalid input. Please enter an integer between 1 and 255";
            continue;
        }

        binary = decimal_to_binary(value);
        cout<< "The binary representation of " << value << " is " << binary<<"\n";

        cout<<"Enter 'q' to quit, or any other key to continue: ";
        cin>>choice;
    }
    while(choice != 'q');
    return 0;
}