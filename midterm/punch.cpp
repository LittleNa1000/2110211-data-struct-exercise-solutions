#include <iostream>
#include <vector>
using namespace std;
vector<string> punch(vector<string> &v, vector<string>::iterator it, int k)
{
  // write some code here
  // don’t forget to return something
  int l = it - v.begin() - k, r = it - v.begin() + k;
  vector<string> u;
  for (int i = 0; i < v.size(); ++i)
  {
    if (!(l <= i && i <= r))
    {
      u.push_back(v[i]);
    }
  }
  return u;
}
int main()
{
  int n, j, k;
  cin >> n >> j >> k;
  vector<string> v(n);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  cout << "Result after punch" << endl;
  vector<string> result = punch(v, v.begin() + j, k);
  for (auto &x : result)
  {
    cout << x << endl;
  }
}