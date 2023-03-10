#include "question4.h"
bool test_config()
{
    return true;
}

string decimal_to_binary(int n)
{
    string binary = "";
    for(int i = 7; i >= 0; i--){
        binary += ((n >> i) & 1) ? "1" : "0";
    }
    return binary;
}