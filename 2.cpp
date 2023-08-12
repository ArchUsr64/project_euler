#include <bits/stdc++.h>

const int INPUT = 4000000;

using namespace std;

int main() {
  int current = 1;
  int next = 2;
  int sum = 0;
  while (next < INPUT) {
    sum += (next % 2 == 0) * next;
    int temp = next;
    next += current;
    current = temp;
  }
  cout << sum << endl;
}
