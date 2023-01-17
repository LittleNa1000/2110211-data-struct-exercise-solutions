#include <bits/stdc++.h>
#include "pq.h"
using std::string;
using std::vector;
int main()
{
    CP::priority_queue<string> pq;
    vector<string> v = {"a", "b", "c", "d"}, u;
    for (int i = 0; i < v.size(); ++i)
    {
        pq.push(v[i]);
    }
    pq.get_at_least(u, "c");
    for (int i = 0; i < u.size(); ++i)
    {
        std::cout << u[i] << ' ';
    }
}