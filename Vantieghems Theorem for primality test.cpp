#include<bits/stdc++.h>
using namespace std;
void checkVantieghemsTheorem(int limit)
{
    long long unsigned prod=1;
    for(long long unsigned n=2;n<limit;n++)
    {
        if(((prod-n)%((1LL<<n)-1))==0)
        {
             cout << n << " is prime\n";
        }
         prod *= ((1LL << n) - 1);
    }
}
int main()
{
    checkVantieghemsTheorem(10);
    return 0;
}
