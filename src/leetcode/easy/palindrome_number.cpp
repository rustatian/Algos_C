#include "palindrome_number.hpp"
#include <catch.hpp>

TEST_CASE("PALINDROME", "[palindrome_number]") {
    PalindromeNumber pn;
    REQUIRE(true == pn.isPalindrome(121));
    REQUIRE(true == pn.isPalindrome(11));
    REQUIRE(false == pn.isPalindrome(1211));
}

bool PalindromeNumber::isPalindrome(int x) {
    if ((x < 0) || (x % 10 == 0 && x != 0)) {
        return false;
    }

    int reverted = 0;

    while (x > reverted) {
        reverted = (reverted * 10) + (x % 10);
        x /= 10;
    }


    return x == reverted || x == reverted / 10;
}
