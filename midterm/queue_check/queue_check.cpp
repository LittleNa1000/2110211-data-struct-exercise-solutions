#include <bits/stdc++.h>
using namespace std;
bool ok;
int ans, a, b, c, d, e, N;
int main()
{
  scanf("%d", &N);
  while (N--)
  {
    ok = false;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    if ((a == d) && (b == c) || (c > b && (a + b) % c == d))
    {
      ok = true;
    }
    if (e == 0 || ok)
    {
      if (ok)
      {
        printf("OK\n");
      }
      else
      {
        printf("WRONG\n");
      }
      continue;
    }
    if (e == 1)
    {
      ans = d - b;
    }
    else if (e == 2)
    {
      ans = d - a;
    }
    else if (e == 3)
    {
      if (a == d)
      {
        ans = b;
      }
      else if (a + b - d == 0)
      {
        ans = a + b + 1;
      }
      else
      {
        ans = a + b - d;
      }
    }
    else
    {
      ans = (a + b) % c;
    }
    while (ans < 0)
    {
      ans += c;
    }
    printf("WRONG %d\n", ans);
  }
}