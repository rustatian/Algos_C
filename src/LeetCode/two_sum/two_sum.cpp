#include "two_sum.hpp"
#include <vector>
#include <iostream>

#define CATCH_CONFIG_MAIN

#include "catch.hpp"

//Given an array of integers, return indices of the two numbers such
// that they add up to a specific target.
//
//You may assume that each input would have exactly one solution,
// and you may not use the same element twice.
//
//Example:
//
//Given nums = [2, 7, 11, 15], target = 9,
//
//        Because nums[0] + nums[1] = 2 + 7 = 9,
//return [0, 1].

TEST_CASE("TWO SUM", "[twoSum]") {
    auto v = std::vector<int>{2, 7, 11, 15};
    auto resint = 0;

    auto res = Solution{};
    auto rr = res.twoSum(v, resint);
}

// Brute force
std::vector<int> Solution::twoSum(std::vector<int> &nums, int target) {
    auto result = std::vector<int>{};
    auto values = std::map<int, int>{};


    for (auto &it: nums) {
        int diff = target - nums.at(result.at(it));

        if (values.contains(diff)) {
            return std::vector<int>{diff, it};
        }


    }
    return result;
}

