#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>
template <typename T>
void CP::list<T>::merge(CP::list<CP::list<T>> &ls)
{
  // write your code here
  for (auto &it : ls)
  {
    // printf("-%d- ", it->size());
    // if (it.size() > 0)
    // {
    //   printf("-%d- ", it.mHeader->next->data);
    // }
    mHeader->prev->next = it.mHeader->next;
    it.mHeader->next->prev = mHeader->prev;

    it.mHeader->prev->next = mHeader;
    mHeader->prev = it.mHeader->prev;

    it.mHeader->prev = it.mHeader;
    it.mHeader->next = it.mHeader;

    mSize += it.mSize;
    it.mSize = 0;
    // while (!(it->empty()))
    // {
    //   // printf("%d ", it->size());
    //   push_back(it->front());
    //   it->pop_front();
    // }
  }
}

#endif
