#include <iostream>

using namespace std;

int main() {
  int n, count = 0;
  cin >> n;
  while (n > 0) {
    if (n % 2) count++;
    n /= 2;
  }
  cout << count;
  return 0;
}
