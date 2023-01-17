#include <bits/stdc++.h>
using namespace std;
int n, x;
string q;
vector<int> v;
int main()
{
  scanf("%d", &n);
  while (n--)
  {
    cin >> q;
    if (q == "pb")
    {
      scanf("%d", &x);
      v.push_back(x);
    }
    if (q == "d")
    {
      scanf("%d", &x);
      v.erase(v.begin() + x);
    }
    if (q == "sa")
    {
      sort(v.begin(), v.end());
    }
    if (q == "sd")
    {
      sort(v.begin(), v.end());
      reverse(v.begin(), v.end());
    }
    if (q == "r")
    {
      reverse(v.begin(), v.end());
    }
  }
  for (int i = 0; i < v.size(); ++i)
  {
    printf("%d ", v[i]);
  }
}