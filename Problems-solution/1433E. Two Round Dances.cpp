
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mk make_pair
#define REP(i,n) for(ll i=0;i<n;i++)
#define mxx 10000
int M;
ll mod(ll x)
{
    return ((x%M+M)%M);
}
ll mul(ll a,ll b)
{
    return mod(mod(a)*mod(b));
}
ll big_mod(ll base,ll power,ll m)
{
    ll res=1;
    if(base==0)return 0;
    if(power==0)return 1LL;
    if(power==1)return mod(base);
    while(power)
    {
        if(power%2==1)
         {
             res= mul(res,base);
         }
         base=mul(base,base);
         power/=2;
    }
    return res;
}
ll fact(ll n);
ll ncr(ll n,ll r)
{
    return fact(n)/(fact(r)*fact(n-r));
}
ll fact(ll n)
{
    ll res=1;
    for(ll i=2;i<=n;i++)
        res*=i;
    return res;
}
ll solve(ll n)
{
    return (ncr(n,n/2)*fact(n/2-1)*fact(n/2-1))/2;
}
int main()
{
    ll n,r;
    cin>>n;
    cout<<solve(n)<<endl;
}

//Alhamdulillah...
