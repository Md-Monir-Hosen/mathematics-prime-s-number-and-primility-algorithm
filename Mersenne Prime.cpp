#include<bits/stdc++.h>
using namespace std;
void SieveOfEratosthenes(int n,bool isPrime[])
{

   for(int i=0;i<=n;i++)
   {
     isPrime[i]=true;
   }
   for(int p=2;p*p<=n;p++)
   {
     if(isPrime[p]==true)
     {
         for(int i=2*p;i<=n;i+=p)
         {
             isPrime[i]=false;
         }
     }
   }
}
void mersennePrimes(int n)
{
  bool prime[n+1];
  SieveOfEratosthenes(n,prime);
  for(int k=2;((1<<k)-1)<=n;k++)
  {
    long long num=(1<<k)-1;
    if(prime[num])
    {
        cout<<num<<" ";
    }
  }
}
int main()
{
     int n = 31;
    cout << "Mersenne prime numbers smaller "
         << "than or equal to " << n << endl;
    mersennePrimes(n);
    return 0;
}
