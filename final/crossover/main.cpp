#include "list.h"
#include <bits/stdc++.h>
int main()
{
    CP::list<int> l1, l2;
    for (int i = 1; i <= 4; ++i)
    {
        l1.push_back(i);
        l2.push_back(i * 10);
    }
    l1.crossover(l2);
    l1.print();
    l2.print();
}