#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Test get_cookie_ingredient vector")
{
	vector<double> n1_expected {1.5, 1.0, 2.75};
	vector<double> n2_expected {3.0, 2.0, 5.5};
	vector<double> n3_expected {.75, 0.5, 1.375};

	REQUIRE(get_cookie_ingredients(48) == n1_expected);
	REQUIRE(get_cookie_ingredients(96) == n2_expected);
	REQUIRE(get_cookie_ingredients(24) == n3_expected);
}