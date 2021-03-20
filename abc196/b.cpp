#include <bits/stdc++.h>
using namespace std;

int main() {
  string x;
  string answer;
  cin >> x;

  for (int i = 0; i < x.length(); i++) {
    if (x[i] == '.') break;
    answer += x[i];
  }

  cout << answer << endl;
}
