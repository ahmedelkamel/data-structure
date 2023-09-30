#include <iostream>
// #include <string>
#include <vector>
// #include <algorithm>
#include "test_utils.hpp"
#include "algorithm.hpp"

using namespace test::utils;

int main() {
  vector<int> v{2, 8 , 5, 3, 9, 4, 1, 7};

  print(v, "Before merge_sort()");
  merge_sort(v.begin(), v.end());
  print(v, "After merge_sort()");

  vector<int> v1{2, 8 , 5, 3, 9, 4, 1, 7};
  print(v1, "Before quick_sort()");
  quick_sort(v1.begin(), v1.end());
  print(v1, "After quick_sort()");

  return 0;
}
