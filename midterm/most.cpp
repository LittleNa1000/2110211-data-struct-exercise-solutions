#include <bits/stdc++.h>
using namespace std;
int n, mxc;
string str, mxs;
map<string, int> mp;
int main()
{
  scanf("%d", &n);
  for (int i = 0; i < n; ++i)
  {
    cin >> str;
    if (mp.find(str) == mp.end())
    {
      mp[str] = 1;
    }
    else
    {
      ++mp[str];
    }
  }
  for (auto it = mp.begin(); it != mp.end(); ++it)
  {
    if (it->second >= mxc)
    {
      mxc = it->second;
      mxs = it->first;
    }
  }
  cout << mxs << ' ' << mxc << '\n';
}