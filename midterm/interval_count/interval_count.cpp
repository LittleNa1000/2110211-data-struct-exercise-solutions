#include <bits/stdc++.h>
using namespace std;
int n, Q, k, tem, l, r;
vector<int> v;
int main()
{
  scanf("%d %d %d", &n, &Q, &k);
  for (int i = 0; i < n; ++i)
  {
    scanf("%d", &tem);
    v.push_back(tem);
  }
  sort(v.begin(), v.end());
  while (Q--)
  {
    scanf("%d", &tem);
    l = lower_bound(v.begin(), v.end(), tem - k) - v.begin();
    r = upper_bound(v.begin(), v.end(), tem + k) - v.begin() - 1;
    // printf("l%d r%d\n", l, r);
    printf("%d ", r - l + 1);
  }
}