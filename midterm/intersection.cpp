#include <bits/stdc++.h>
using namespace std;
int n, m, tem;
vector<int> v1, v2;
int main()
{
  scanf("%d %d", &n, &m);
  for (int i = 0; i < n; ++i)
  {
    scanf("%d", &tem);
    v1.push_back(tem);
  }
  for (int i = 0; i < m; ++i)
  {
    scanf("%d", &tem);
    v2.push_back(tem);
  }
  sort(v1.begin(), v1.end());
  sort(v2.begin(), v2.end());
  int i = 0, j = 0, prv = INT_MIN;
  while (i < n && j < m)
  {
    if (v1[i] == v2[j] && prv != v1[i])
    {
      printf("%d ", v1[i]);
      prv = v1[i];
      ++i;
      ++j;
    }
    else if (v1[i] < v2[j])
    {
      ++i;
    }
    else
    {
      ++j;
    }
  }
}