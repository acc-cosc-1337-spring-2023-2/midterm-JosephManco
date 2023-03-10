bool test_config();
#include <iostream>
#include <vector>

using std::cout; using std::cin; using std::vector;
const double cookies_per_batch = 48.0;
const double sugar_per_batch = 1.5;
const double butter_per_batch = 1.0;
const double flour_per_batch = 2.75;
vector<double> get_cookie_ingredients(int cookies_to_bake);