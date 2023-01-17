#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <vector>

using namespace std;

int eval_postfix(vector<pair<int, int>> v)
{
  // WRITE YOUR CODE HERE
  // DON"T FORGET TO RETURN THE RESULT
  stack<int> st;
  int a, b, c;
  for (int i = 0; i < v.size(); ++i)
  {
    if (v[i].first)
    {
      st.push(v[i].second);
    }
    else
    {
      b = st.top();
      st.pop();
      a = st.top();
      st.pop();
      if (v[i].second == 0)
      {
        c = a + b;
      }
      else if (v[i].second == 1)
      {
        c = a - b;
      }
      else if (v[i].second == 2)
      {
        c = a * b;
      }
      else
      {
        c = a / b;
      }
      st.push(c);
    }
  }
  return st.top();
}

#endif
