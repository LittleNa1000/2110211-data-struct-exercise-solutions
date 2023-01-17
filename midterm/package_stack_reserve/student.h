#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
int CP::stack<T>::compare_reserve(const CP::stack<T> &other) const
{
    // write your code here
    int r1 = mCap - mSize;
    int r2 = other.mCap - other.mSize;
    if (r1 > r2)
        return 1;
    if (r2 > r1)
        return -1;
    return 0;
}

#endif
