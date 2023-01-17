#include <bits/stdc++.h>
using namespace std;
map<long long, long long> mp;
long long n, m, f, s, a, b, ga, gb;
long long dad(long long x)
{
  if (mp.find(x) != mp.end())
  {
    // printf("father %lld son %lld\n", mp[x], x);
    return mp[x];
  }
  return -1;
}
int main()
{
  scanf("%lld %lld", &n, &m);
  for (long long i = 0; i < n; ++i)
  {
    scanf("%lld %lld", &f, &s);
    mp[s] = f;
  }
  while (m--)
  {
    scanf("%lld %lld", &a, &b);
    ga = dad(dad(a));
    gb = dad(dad(b));
    // printf("%lld %lld\n", ga, gb);
    if (a != b && ga == gb && ga != -1)
    {
      printf("YES\n");
    }
    else
    {
      printf("NO\n");
    }
  }
}