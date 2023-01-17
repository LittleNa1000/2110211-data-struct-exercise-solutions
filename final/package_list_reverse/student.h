#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
typename CP::list<T>::iterator CP::list<T>::reverse(iterator a, iterator b)
{
  // write your code here
  CP::list<T>::iterator l = a, r = b;
  if (l == r)
    return a;
  --r;
  if (l == r)
    return a;
  while (1)
  {
    T t;
    t = l.ptr->data;
    l.ptr->data = r.ptr->data;
    r.ptr->data = t;
    --r;
    if (l == r)
      return a;
    ++l;
    if (l == r)
      return a;
  }
}

#endif
