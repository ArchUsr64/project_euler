#include <bits/stdc++.h>

int solve(int n) {
  if (n == 1) {
    return 1;
  }
  int result_prior = solve(n - 1);
  int remainder = result_prior % n;
  int excess = remainder;
  int i;
  for(i = 1; excess % n != 0; i++) {
    excess += remainder;
  }
  return result_prior * i;
}

int main() {
  std::cout << solve(20) << std::endl;
}
