#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::block_swap(iterator a, iterator b, size_t m)
{
  // write your code here
  if (a > b)
  {
    iterator k = a;
    a = b;
    b = k;
  }
  if (!(m > 0 && a + m - 1 < b && begin() <= a && a < end() && begin() <= b && b < end() && begin() <= a + m - 1 && a + m - 1 < end() && begin() <= b + m - 1 && b + m - 1 < end()))
  {
    return false;
  }
  CP::vector<T> tmp;
  iterator ita = a;
  iterator itb = b;
  for (int i = 0; i < m; ++i)
  {
    tmp.push_back(*ita);
    *ita = *itb;
    ++ita;
    ++itb;
  }
  itb = b;
  for (int i = 0; i < m; ++i)
  {
    *itb = tmp[i];
    ++itb;
  }
  return true;
}

#endif
