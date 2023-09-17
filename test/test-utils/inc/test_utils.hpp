#ifndef TEST_UTILS_HPP
#define TEST_UTILS_HPP

#include <iostream>
#include <string>
#include <vector>

using namespace std;

namespace test {
namespace utils {
template <typename Cont>
void print(const Cont &cont, string msg = "Default Msg:") {
  cout << msg << endl;
  for (auto e : cont) {
    cout << e << ' ';
  }
  cout << endl;
  for (int i = 0; i < 30; i++) {
    cout << '-';
  }
  cout << "\n\n\n";
}

} // namespace utils
} // namespace test

#endif // TEST_UTILS_HPP
