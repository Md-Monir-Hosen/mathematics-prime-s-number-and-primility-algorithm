#include<bits/stdc++.h>
using namespace std;
int power(int x,unsigned int y)
{
   if(y==0)
   {
      return 1;
   }
   if(y%2==0)
   {
       return power(x,y/2)*power(x,y/2);
   }
   else
   {
       return x*power(x,y/2)*power(x,y/2);
   }
}
bool sieveOfEratosthenes(int n,bool isPrime[])
{
   isPrime[0]=isPrime[1]=false;
   for(int i=2;i<n;i++)
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
bool leftTruPrime(int n)
{
    int temp=n,cnt=0,temp1;
    while(temp)
    {
       cnt++;
       temp1=temp%10;
       if(temp1==0)
       {
           return false;
       }
       temp=temp/10;
    }
    bool isPrime[n+1];
    sieveOfEratosthenes(n,isPrime);
    for(int i=cnt;i>0;i--)
    {
       int mod=power(10,i);
       if(!isPrime[n%mod])
       {
           return false;
       }
    }
    return true;
}
int main()
{
    int n = 113;

    if (leftTruPrime(n))
        cout << n << " is left truncatable prime" << endl;
    else
        cout << n << " is not left truncatable prime" << endl;
    return 0;
}
