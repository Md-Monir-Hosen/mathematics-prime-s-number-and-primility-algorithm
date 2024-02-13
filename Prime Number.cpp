#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
  static int i=2;
  if(n==0 ||n==1)
  {
      return false;
  }
  if(n==i)
  {
      return true;
  }
  if(n%i==0)
  {
      return true;
  }
  i++;
  return isPrime(n);
}
int main()
{
     isPrime(35) ? cout << " true\n" : cout << " false\n";
    return 0;
}
