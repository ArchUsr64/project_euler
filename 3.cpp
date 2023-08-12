#include <bits/stdc++.h>

const long INPUT = 600851475143;

using namespace std;

bool is_prime(int n) {
  for (int i = 2; i < sqrt(n); i++) {
    if (n % i == 0) return false;
  }
  return true;
}

int main() {
  for (int i = sqrt(INPUT); i >= 2; i--) {
    if (is_prime(i) && INPUT % i == 0) {
      cout << i << endl;
      return 0;
    }
  }
}
