#include <bits/stdc++.h>
#include "map_bst.h"
using namespace std;
int main()
{
    CP::map_bst<int, int> m;
    vector<int> v = {5, 2, 3, 1, 4, 7, 8, 6};
    for (int i = 0; i < v.size(); ++i)
    {
        m[v[i]] = v[i] * 10;
    }
    m.print();
    printf("%d", m.sum_node_depth());
}