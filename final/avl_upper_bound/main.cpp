#include <bits/stdc++.h>
#include "map_avl.h"
int main()
{
    CP::map_avl<std::string, std::string> m;
    std::vector<std::string> v = {"a", "b", "c", "d"};
    for (int i = 0; i < v.size(); ++i)
    {
        if (i != 2)
            m[v[i]] = v[i] + v[i];
    }
    for (int i = 0; i < v.size(); ++i)
    {
        auto it = m.upper_bound(v[i]);
        if (it == m.end())
            printf("NOT FOUND\n");
        else
            std::cout << it->first << ' ' << it->second << '\n';
    }
    m.print();
}