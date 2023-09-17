#include "heap.hpp"
#include "utils.hpp"
#include <vector>
#include <algorithm>

// Min heap (In place Bottom-Up Heap Construction)
// Time Complexity: O(N)
void heapify(vector<int> &v) {
  int n = v.size();
  // Start from the last internal node and move upward
  for (int i = n / 2 - 1; i >= 0; i--) {
    int j = i;
    // Compare with its 2 children and swap with min child
    // Exit when you reach an external node
    while (j < n / 2) {
      int left = 2 * j + 1;
      int right = 2 * j + 2;
      // Internal node has at least one child (left child)
      int min_child = left;
      min_child = (right < n) && (v[right] < v[left])? right : left;

      if (v[min_child] < v[j]) {
        utils::swap(v[min_child], v[j]);
        // Check after bubbling v[j] down that it is in the right place
        j = min_child;
      }
      // v[j] is the less than both of its children
      else {
        break;
      }
    }
  }
}
