add_executable(two_sum two_sum.cpp two_sum.hpp)
add_executable(remove_vovels_from_string remove_vovels_from_string.cpp)
add_executable(palindrome_number palindrome_number.cpp palindrome_number.hpp)

target_link_libraries(two_sum PRIVATE Catch2::Catch2 Catch2::Catch2WithMain)
target_link_libraries(palindrome_number PRIVATE Catch2::Catch2 Catch2::Catch2WithMain)
