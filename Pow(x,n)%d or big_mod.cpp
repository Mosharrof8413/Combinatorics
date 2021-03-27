
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mk make_pair
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
int main()
{
  ll t=1;
 // cin>>t;
  while(t--)
  {
     ll x,y,m;
     cin>>x>>y>>m;
     M=m;
     cout<<big_mod(x,y,m)<<endl;

  }
}

//Alhamdulillah...
