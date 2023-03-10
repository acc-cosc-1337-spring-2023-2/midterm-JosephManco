#include "question3.h"

bool test_config()
{
    return true;
}
int get_earned_points(int sold)
{
    int points;
    if(sold < 1)
    {
        points = 0;
    }
    else
    {
        switch (sold)
        {
        case 1 ... 5:
            points = sold;
            break;
        case 6 ... 10:
            points = sold * 5;
            break;
        case 11 ... 15:
            points = sold * 10;
            break;
        default:
            points = sold *15;
            break;
        }
    }
    return points;
}