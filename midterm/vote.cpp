#include <bits/stdc++.h>
using namespace std;
int n, k;
string str;
map<string, int> mp;
int main()
{
  scanf("%d %d", &n, &k);
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
  for (auto val : mp)
  {
    printf("%d ", val.second);
  }
}