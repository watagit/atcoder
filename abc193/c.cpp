#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  set<int> s;

  for (int a = 2; a * a <= n; a++) {
    int x = a * a;
    while (x <= n) {
      s.insert(x);
      x *= a;
    }
  }

  cout << n - s.size() << endl;
}
