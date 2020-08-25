#include <cstdlib>
#include <catch2/catch.hpp>
#include <boost/container/vector.hpp>

bool isValidSubsequence(boost::container::vector<int> array, boost::container::vector<int> sequence) {
    // Write your code here.
    
    for (auto &num: sequence) {

    }
    return false;
}

TEST_CASE("validate sequence", "[validate sequence]") {
    auto a = boost::container::vector<int>{5, 1, 22, 25, 6, -1, 8, 10};
    auto b = boost::container::vector<int>{1, 6, -1, 10};
    isValidSubsequence(a, b);
}