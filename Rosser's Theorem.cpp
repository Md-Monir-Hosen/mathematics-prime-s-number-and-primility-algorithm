#include<bits/stdc++.h>
using namespace std;
#define show(x) cout << #x << " = " << x << "\n"
vector<int>prime;
void sieve()
{
    int n=1e5;
    vector<bool>isPrime(n+2,true);
    isPrime[0]=isPrime[1]=false;
    for(long long i=2;i<=n;i++)
    {
        if(isPrime[i])
        {
            for(long long j=i*i;j<=n;j=+i)
            {
                isPrime[j]=false;

            }
        }
    }
    for(int i=0;i<=n;i++)
    {
        if(isPrime[i])
        {
            prime.push_back(i);
        }
    }
}
void verifyRosser(int n)
{
    cout << "ROSSER'S THEOREM: nth prime "
            "number > n * (ln n)\n";
    for (int i = 0; i < n; i++)
        if (prime[i] > (i + 1) * log(i + 1)) {
            cout << "For n = " << i + 1
                 << ", nth prime number = "
                 << prime[i] << "\n\t"
                 << prime[i] << " > " << i + 1
                 << " * ln(" << i + 1 << ")\n";
        }
}
int main()
{
     sieve();
    verifyRosser(20);
    return 0;
}
