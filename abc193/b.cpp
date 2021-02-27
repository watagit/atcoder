#include <bits/stdc++.h>
using namespace std;

// スヌケ君がその店に到着した際の在庫数を返す関数
int getActualStock(int requiredTime, int stock) {
  return stock - requiredTime;
}

int main() {
  int n;
  int minimumAmount = -1;
  bool flag = false;

  cin >> n;

  int a[n];
  int p[n];
  int x[n];

  for (int i = 0; i < n; i++) {
    scanf("%d %d %d", &a[i], &p[i], &x[i]);
    x[i] = getActualStock(a[i], x[i]);
  }

  minimumAmount = p[0];
  for (int i = 1; i < n; i++) {
    if (x[i] > 0 && minimumAmount > p[i]) {
      minimumAmount = p[i];
      flag = true;
    }
  }

  if (flag)
    cout << minimumAmount << endl;
  else
    cout << -1 << endl;
}
