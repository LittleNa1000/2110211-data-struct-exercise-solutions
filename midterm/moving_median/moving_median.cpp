// https : // youtu.be/itmhHWaHupI
#include <bits/stdc++.h>
using namespace std;
multiset<int> ss, ls;
int di, k, n, w, a[1000005];
void bl()
{
  if (ss.size() > ls.size() + 1 || ls.size() && *ss.rbegin() > *ls.begin())
  {
    // printf("trans ss%d ls%d\n", ss.size(), ls.size());
    k = *ss.rbegin();
    ss.erase(ss.find(k));
    ls.insert(k);
  }
  if (ls.size() > ss.size() + 1)
  {
    // printf("trans2 ss%d ls%d\n", ss.size(), ls.size());
    k = *ls.begin();
    ls.erase(ls.find(k));
    ss.insert(k);
  }
}
void add(int i)
{
  ss.insert(a[i]);
  bl();
}
void erase(int di, int i)
{
  // printf("er %d\n", a[di]);
  if (ss.find(a[di]) != ss.end())
  {
    ss.erase(ss.find(a[di]));
  }
  else
  {
    ls.erase(ls.find(a[di]));
  }
  bl();
}
void m()
{
  // printf("m ss%d ls%d\n", ss.size(), ls.size());
  if (ls.size() > ss.size())
  {
    printf("%d ", *ls.begin());
  }
  else
  {
    printf("%d ", *ss.rbegin());
  }
}
int main()
{
  scanf("%d %d", &n, &w);
  for (int i = 0; i < min(n, w + 1); ++i)
  {
    scanf("%d", &a[i]);
    add(i);
  }
  m();
  for (int i = w + 1; i < n; ++i, ++di)
  {
    scanf("%d", &a[i]);
    if (a[i] != a[di])
    {
      add(i);
      erase(di, i);
    }
    m();
  }
}