#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "test_utils.hpp"
#include "heap.hpp"

using namespace test::utils;

int main() {
  vector<int> v1{100, -5, 90, 0, 85, 10, 70, 30, 50, -10};
  vector<int> v2{v1};

  print(v1, "Before heapify()");
  heapify(v1);
  print(v1, "After heapify()");

  print(v2, "Before make_heap()");
  make_heap(v2.begin(), v2.end(), greater<>());
  print(v2, "After make_heap()");

  cout << ((v1 == v2)? "Test Passed":"Test Failed") << endl;

  return 0;
}
