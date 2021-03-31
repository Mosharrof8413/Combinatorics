

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mk make_pair
#define REP(i,n) for(ll i=0;i<n;i++)
#define mxx 10000
#define M  998244353
ll mod(ll x)
{
    return ((x%M + M)%M);
}
ll mul(ll a,ll b)
{
    return mod(mod(a)*mod(b));
}
ll add(ll a,ll b)
{
    return mod(mod(a)+mod(b));
}
ll big_mod(ll base,ll power,ll m)
{
    ll res=1;
    if(base==0)return 0LL;
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
   ll n;
   cin>>n;
   string st;
   cin>>st;
   ll left=1;
   ll ans=0;
   for(ll i=1;i<n;i++)
   {
       if(st[i]==st[i-1])left++;
       else break;
   }
   ll right=1;
   for(ll i=n-2;i>=0;i--)
   {
       if(st[i]==st[i+1])right++;
       else break;
   }
   if(st[0]==st[n-1])           //aabbaa
    ans=mul(left,right);

   ans=add(ans,left);
   ans=add(ans,right);
   ans=add(ans,1);
   cout<<ans<<endl;
}

//Alhamdulillah...
