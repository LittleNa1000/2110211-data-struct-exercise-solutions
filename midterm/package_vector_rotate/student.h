#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::rotate(iterator first, iterator last, size_t k)
{
  // write your code here
  iterator it = first;
  CP::vector<T> tmp;
  for (int i = 0; i < k; ++i)
  {
    tmp.push_back(*it);
    ++it;
  }
  it = first;
  for (int i = 0; i < last - first - k; ++i)
  {
    *it = *(it + k);
    ++it;
  }
  it = last - k;
  for (int i = 0; i < k; ++i)
  {
    *it = tmp[i];
    ++it;
  }
}

#endif
