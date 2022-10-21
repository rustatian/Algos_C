add_subdirectory(remove_vovels_from_string)
add_subdirectory(two_sum)

target_link_libraries(two_sum PRIVATE Catch2::Catch2 Catch2::Catch2WithMain)
