#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <bits/stdc++.h>

template <typename T>
std::vector<T> CP::queue<T>::to_vector(int k) const
{
  std::vector<T> res;
  // write your code only here
  for (int i = 0; i < k && i < size(); ++i)
  {
    res.push_back(mData[i + mFront]);
  }
  return res;
}

template <typename T>
CP::queue<T>::queue(iterator from, iterator to)
{
  // write your code only here
  int cap = 1;
  mData = new T[cap]();
  mCap = cap;
  mSize = 0;
  mFront = 0;
  ensureCapacity(to - from);
  for (iterator it = from; it < to; ++it)
  {
    push(*it);
  }
}

#endif
