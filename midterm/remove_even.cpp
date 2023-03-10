#include <iostream>
#include <vector>
using namespace std;
void remove_even(vector<int> &v, int a, int b)
{
  // write your code only in this function
  vector<int> u;

  for (int i = 0; i < v.size(); ++i)
  {
    if (!(a <= i && i <= b && i % 2 == 0))
    {
      u.push_back(v[i]);
    }
  }
  for (int i = 0; i < u.size(); ++i)
  {
    v[i] = u[i];
  }
  int d = v.size() - u.size();
  for (int i = 0; i < d; ++i)
  {
    v.pop_back();
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
  remove_even(v, a, b);
  // display content of the vector
  for (auto &x : v)
  {
    cout << x << " ";
  }
  cout << endl;
}
