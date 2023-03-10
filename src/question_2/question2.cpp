#include "question2.h"

bool test_config()
{
   return true;
}

vector<double> get_cookie_ingredients(int cookies_to_bake){
    double scale_factor = cookies_to_bake / cookies_per_batch;

    double sugar_needed = sugar_per_batch * scale_factor;
    double butter_needed = butter_per_batch * scale_factor;
    double flour_needed = flour_per_batch * scale_factor;

    return{sugar_needed, butter_needed, flour_needed};


}