#include <bits/stdc++.h>
using namespace std;

int getDigit(int x) {
  return log10(x) + 1;
}

int main() {
  int n;
  cin >> n;

  printf("%d\n", getDigit(n));
}
