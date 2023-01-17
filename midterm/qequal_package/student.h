#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::queue<T>::operator==(const CP::queue<T> &other) const
{
  // write your code here
  //
  //  YOU CANNOT CALL push or pop
  if (front() != other.front() || size() != other.size())
  {
    return false;
  }
  for (int i = 0; i < size(); ++i)
  {
    if (mData[mFront + i] != other.mData[other.mFront + i])
    {
      return false;
    }
  }
  return true;
}

#endif
