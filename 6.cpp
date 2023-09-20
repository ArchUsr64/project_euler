#include <bits/stdc++.h>

int main() {
  long long n = 100;
  long long sum_of_n = (n * (n + 1)) / 2;
  long long square_of_sum_of_n = sum_of_n * sum_of_n;
  long long sum_of_square_of_n = (n * (n + 1) * (2*n + 1)) / 6;
  std::cout << square_of_sum_of_n - sum_of_square_of_n << std::endl;
  return 0;
}
