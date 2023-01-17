#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>

template <typename T, typename Comp>
bool CP::priority_queue<T, Comp>::find(T k) const
{
  // your code here
  for (int i = 0; i < mSize; ++i)
  {
    if (mData[i] == k)
    {
      return true;
    }
  }
  return false;
}

template <typename T, typename Comp>
int CP::priority_queue<T, Comp>::find_level(T k) const
{
  // your code here
  int s = -1, ans = -1;
  for (int i = 0; i < mSize; ++i)
  {
    if (mData[i] == k)
    {
      s = i + 1;
    }
  }
  if (s == -1)
    return -1;
  while (s > 0)
  {
    ++ans;
    s /= 2;
  }
  return ans;
}

#endif
