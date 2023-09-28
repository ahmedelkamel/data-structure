#include "algorithm.hpp"
#include <iostream>

void print(const vector<int> &&cont, string msg = "Default Msg:") {
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
