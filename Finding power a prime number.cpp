#include<bits/stdc++.h>
using namespace std;
int PowerOFPINnfactorial(int n,int p)
{
    int ans=0;
    int temp=p;
    while(temp<=n)
    {
        ans+=n/temp;
        temp=temp*p;
    }
    return ans;
}
int main()
{
     cout << PowerOFPINnfactorial(4, 2) << endl;
    return 0;
}
