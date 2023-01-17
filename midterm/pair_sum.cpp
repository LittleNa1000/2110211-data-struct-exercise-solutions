#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int n, m, tem, i, j, x;
bool f;
int main()
{
  scanf("%d %d", &n, &m);
  for (int i = 0; i < n; ++i)
  {
    scanf("%d", &tem);
    v.push_back(tem);
  }
  sort(v.begin(), v.end());
  while (m--)
  {
    scanf("%d", &x);
    i = 0;
    j = n - 1;
    f = 0;
    while (i < j)
    {
      // printf("%d %d %d\n", i, j, v[i] + v[j]);
      if (v[i] + v[j] == x)
      {
        printf("YES\n");
        f = 1;
        break;
      }
      if (v[i] + v[j] < x)
      {
        ++i;
      }
      else
      {
        --j;
      }
    }
    if (!f)
      printf("NO\n");
  }
}