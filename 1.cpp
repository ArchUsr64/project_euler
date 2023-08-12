#include <bits/stdc++.h>

const int INPUT = 1000;

using namespace std;

int main() {
  int sum = 0;
  for(int i = 1; i <= (INPUT - 1)/ 3; i++)
    sum += i * 3;
  for(int i = 1; i <= (INPUT - 1)/ 5; i++)
    sum += i * 5;
  for(int i = 1; i <= (INPUT - 1)/ 15; i++)
    sum -= i * 15;
  cout << sum << endl;
}
