#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
void CP::stack<T>::moveInsert(int k, CP::stack<T> &s2, int m)
{
  // your code here
  if (m > s2.size())
    m = s2.size();
  CP::stack<T> s;
  for (int i = 0; i < k; ++i)
  {
    s.push(top());
    pop();
  }
  for (int i = 0, idx = s2.size() - m; i < m; ++i, ++idx)
  {
    push(s2.mData[idx]);
  }
  for (int i = 0; i < m; ++i)
  {
    s2.pop();
  }
  while (!s.empty())
  {
    push(s.top());
    s.pop();
  }
}
#endif
