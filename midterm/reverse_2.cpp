#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int> &v, vector<int>::iterator a, vector<int>::iterator b)
{
  // write your code only in this function
  vector<int>::iterator it;
  int i;
  vector<int> u;
  for (i = 0, it = v.begin(); it < a; it++, ++i)
  {
    u.push_back(*it);
  }
  for (it = b - 1; it >= a; --it, ++i)
  {
    u.push_back(*it);
  }
  for (it = b; it < v.end(); ++it, ++i)
  {
    u.push_back(*it);
  }
  for (i = 0; i < v.size(); ++i)
  {
    v[i] = u[i];
  }
}
int main()
{
  // read input
  int n, a, b;
  cin >> n;
  vector<int> v;
  for (int i = 0; i < n; i++)
  {
    int c;
    cin >> c;
    v.push_back(c);
  }
  cin >> a >> b;
  // call function
  reverse(v, v.begin() + a, v.begin() + b + 1);
  // display content of the vector
  for (auto &x : v)
  {
    cout << x << " ";
  }
  cout << endl;
}