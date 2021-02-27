#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  int diff = a - b;
  double discount = (double)diff / (double)a;

  cout << discount * 100.0 << endl;
}
