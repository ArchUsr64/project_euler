#include <bits/stdc++.h>

using namespace std;

bool is_prime(long long n) {
  for (long long i = 2; i <= sqrt(n); i++) {
    if (n % i == 0)
      return false;
  }
  return true;
}

int main() {
  long long n = 10001;
  vector<long long> buffer;
  buffer.reserve(n);
  long long i = 2;
  while(buffer.size() < n) {
    if (is_prime(i))
      buffer.push_back(i);
    i++;
  }
  cout << buffer[buffer.size() - 1] << endl;
}
