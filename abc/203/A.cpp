#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  int a, b, c;
  cin >> a >> b >> c;
  if (a == b) cout << c << "\n";
  else if (b == c) cout << a << "\n";
  else if (c == a) cout << b << "\n";
  else cout << 0 << "\n";
  return 0;
}
