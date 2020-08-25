#include <vector>

#define CATCH_CONFIG_MAIN

#include "catch2/catch.hpp"

using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) {
    for (int i = 0; i < array.size() - 1; ++i) {
        int firstN = array[i];
        for (int j = i + 1; j < array.size(); ++j) {
            int secondN = array[j];
            if (firstN + secondN == targetSum) {
                return vector<int>{firstN, secondN};
            }
        }
    }
    return {};
}


TEST_CASE("twoNumberSum", "[twoNumberSum]") {
    auto res = twoNumberSum(vector<int>{3, 5, -4, 8, 11, 1, -1, 6}, 10);
    auto right = vector<int>{11, -1};
    REQUIRE(res == right);
}