#include<bits/stdc++.h>
using namespace std;
int exactPrimeFactorCount(int n)
{
  int cnt=0;
  if(n%2==0)
  {
    cnt++;
    while(n%2==0)
    {
        n=n/2;
    }
  }
  for(int i=3;i<=sqrt(n);i++)
  {
      if(n%i==0)
      {
          cnt++;
          while(n%i==0)
          {
              n=n/i;
          }
      }
  }
  if(n>2)
  {
      cnt++;
  }
  return cnt++;
}
int main()
{
     int n = 51242183;
    cout << "The number of distinct prime factors is/are "
         << exactPrimeFactorCount(n) << endl;
    cout << "The value of log(log(n)) is "
         << log(log(n)) << endl;
    return 0;
}
