#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::list<T>::remove_all(const T &value)
{
  // write your code here
  int cnt = 0;
  for (iterator it = begin(); it != end();)
  {
    if (it.ptr->data == value)
    {
      it.ptr->prev->next = it.ptr->next;
      it.ptr->next->prev = it.ptr->prev;
      iterator n = it.ptr->next;
      delete it.ptr;
      it = n;
      ++cnt;
    }
    else
    {
      ++it;
    }
  }
  mSize -= cnt;
}

#endif
