#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <map>

template <typename T>
std::vector<std::pair<T, size_t>> CP::queue<T>::count_multi(std::vector<T> &k) const
{
    // write your code here
    std::map<T, size_t> mp;
    for (int i = 0; i < size(); ++i)
    {
        if (mp.find(mData[i + mFront]) == mp.end())
        {
            mp[mData[i + mFront]] = 0;
        }
        mp[mData[i + mFront]]++;
    }
    std::vector<std::pair<T, size_t>> v;
    for (int i = 0; i < k.size(); ++i)
    {
        if (mp.find(k[i]) != mp.end())
        {
            v.push_back({k[i], mp[k[i]]});
        }
        else
        {
            v.push_back({k[i], 0});
        }
    }
    return v;
}

#endif
