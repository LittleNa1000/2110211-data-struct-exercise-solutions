#include <bits/stdc++.h>
#include "list.h"
using namespace std;
int main()
{
    CP::list<string> l;
    l.push_back("a");
    l.push_back("b");
    l.push_back("c");
    for (int i = 0; i < 3; ++i)
    {
        cout << l[i] << '\n';
    }
}