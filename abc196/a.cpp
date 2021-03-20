#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main() {
  int a, b, c, d;
  cin >> a >> b;
  cin >> c >> d;

  int max = -201;
  for (int x = a; x <= b; x++) {
    for (int y = c; y <= d; y++) {
      if (max < (x - y)) max = x - y;
    }
  }

  cout << max << endl;
}
