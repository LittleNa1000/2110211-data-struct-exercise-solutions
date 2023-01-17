#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::compress()
{
    // write your code here
    T *t = new T[mSize]();
    iterator it = begin();
    for (int i = 0; i < mSize; ++i)
    {
        t[i] = *it;
        ++it;
    }
    delete[] mData;
    mData = t;
    mCap = mSize;
}

#endif
