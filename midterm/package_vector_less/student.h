#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::operator<(const CP::vector<T> &other) const
{
  // write your code here
  //  if you use std::vector, your score will be half (grader will report score BEFORE halving)
  iterator it = &mData[0];
  for (size_t i = 0;; ++i)
  {
    if (i == size() || i == other.size())
    {
      return size() < other.size();
    }
    const T v = *it;
    if (v != other[i])
    {
      return v < other[i];
    }
    ++it;
  }
  return false;
}

#endif
