#include "algorithm.hpp"
#include <iostream>

// {2, 8, 5, 3, 9, 4, 1, 7}

// {2, 8, 5, 3} {9, 4, 1, 7}
// {2, 8} {5, 3} {9, 4} {1, 7}
// {2} {8} {5} {3} {9} {4} {1} {7}

// {2, 3, 5, 8} {1, 4, 7, 9}
// {1, 2, 3, 4, 5, 7, 8, 9}

void linear_sort(vector<int>::iterator beg, vector<int>::iterator end) {
  const int n = end - beg;
  auto mid = beg + n / 2;


  vector<int> v1(beg, mid);
  vector<int> v2(mid, end);

  auto beg1 = v1.begin();
  auto end1 = v1.end();
  auto beg2 = v2.begin();
  auto end2 = v2.end();

  while (beg != end) {
    if(beg1 != end1 && beg2 != end2) {
        if (*beg1<=*beg2) {
            *beg = *beg1;
            ++beg1;
        }
        else {
            *beg = *beg2;
            ++beg2;
        }
    }
    else if (beg1 != end1) {
        *beg = *beg1;
        ++beg1;
    }
    else if (beg2 != end2) {
        *beg = *beg2;
        ++beg2;
    }
    ++beg;
  }
}

void merge_sort(vector<int>::iterator beg, vector<int>::iterator end) {
  const int n = end - beg;
  auto mid = beg + n / 2;
  if (n > 1) {
    merge_sort(beg, mid);
    merge_sort(mid, end);
  }
  print(vector<int>(beg, end), "before linear_sort()");
  linear_sort(beg, end);
  print(vector<int>(beg, end), "after linear_sort()");
}

// {2, 8 , 5, 3, 9, 4, 1, 7}
//  L                  H  P
void quick_sort(vector<int>::iterator beg, vector<int>::iterator end) {
  if (end - beg < 2) {
    return;
  }

  // At least pivot and one element
  auto low = beg;
  auto pivot = end - 1;
  auto high = pivot - 1;

  while (low < high) {
    // Smaller to left, higher to right
    if (*low > *high) {
      swap(*low, *high);
    }
    // mark elements lower than pivot
    if (*low < *pivot) {
      low++;
    } 
    // mark elements larger than pivot
    else if (*high > *pivot) {
      high--;
    }
  }
  // L == H (e.g. odd #elements) :
  // L > H (e.g. even #elements) : *low > *high

  // Parition w.r.t. low
  // Do not swap in case all elements are smaller than the pivot
  if (*low > *pivot) {
    swap(*low, *pivot);
  }
  quick_sort(beg, low);
  quick_sort(low + 1, end);
}
