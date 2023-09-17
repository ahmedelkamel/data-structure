#ifndef UTILS_HPP
#define UTILS_HPP

#include <vector>

namespace utils {
template <typename T> void swap(T &x, T &y) {
  T temp = x;
  x = y;
  y = temp;
}
} // namespace utils

#endif // TEST_UTILS_HPP
