#include <bits/stdc++.h>
#include "pq.h"
using namespace std;
int main()
{
    CP::priority_queue<int> pq;
    for (int i = 0; i < 10; ++i)
    {
        pq.push(i * 10);
    }
    printf("%d\n", pq.swap_value(30, 0));  // 1
    printf("%d\n", pq.swap_value(30, 60)); // 0
    printf("%d\n", pq.swap_value(60, 50)); // 1
    printf("%d\n", pq.swap_value(10, 40)); // 1
    printf("%d\n", pq.swap_value(20, 90)); // 0
    printf("%d\n", pq.swap_value(70, 50)); // 1
    pq.print();
}