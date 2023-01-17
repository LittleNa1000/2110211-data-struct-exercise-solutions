#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l1, l2;
    int n = 10;
    for (int i = 0; i < n; ++i)
    {
        l2 = l1;
        for (auto &x : l2)
        {
            l1.insert(l1.begin(), x);
        }
    }
    printf("---- %d %d", l1.size(), l2.size());
    for (auto &x : l1)
        printf("%d\n", x);
    for (auto &x : l2)
        printf("%d\n", x);
}