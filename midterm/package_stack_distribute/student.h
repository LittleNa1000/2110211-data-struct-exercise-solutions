#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
std::vector<std::vector<T>> CP::stack<T>::distribute(size_t k) const
{
  // write your code here
  std::vector<std::vector<T>> v;
  int r = size() % k, i = 0, sz = size(), idx = 0;
  for (; i < r; ++i)
  {
    std::vector<T> u;
    for (int j = 0; j < (sz / k) + 1; ++j, ++idx)
    {
      u.push_back(mData[sz - idx - 1]);
      // pop();
    }
    v.push_back(u);
  }
  for (; i < k; ++i)
  {
    std::vector<T> u;
    for (int j = 0; j < (sz / k); ++j, ++idx)
    {
      u.push_back(mData[sz - idx - 1]);
      // this->pop();
    }
    v.push_back(u);
  }
  return v;
}
#endif
