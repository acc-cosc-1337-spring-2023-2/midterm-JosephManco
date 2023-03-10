#include "question1.h"

bool test_config()
{
    return true;
}

int get_fib_sequence(int num)
{
    auto temp1 = 0; auto temp2= 1; auto sequencenum = 1;
    for(int i = 1; i < num; i++)
    {
        sequencenum = temp1 + temp2;
        temp1 = temp2;
        temp2 = sequencenum;
    }
    return sequencenum;
}