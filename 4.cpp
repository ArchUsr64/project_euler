#include <bits/stdc++.h>

using namespace std;
bool is_pallindrome(int x) {
  ostringstream s;
  s << x;
  string buffer = s.str();
  for(int i = 0; i < buffer.size()/ 2; i++)
    if(buffer.at(i) != buffer.at(buffer.size() -1 -i))
      return false;
  return true;
}

int main() {
  int largest = 0;
  for (int i = 999; i >= 100; i--)
    for (int j = 999; j >= 100; j--)
      if (is_pallindrome(i * j) && i * j > largest) {
        largest = i * j;
      }
  cout << largest << endl;
  return 0;
}
