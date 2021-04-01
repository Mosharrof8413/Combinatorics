
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
  ll n;
  cin>>n;
  string st;
  map<char,ll>mp;
  vector<string>v;
  for(ll i=0;i<n;i++)
  {
      cin>>st;
      v.pb(st);
      mp[st[0]]++;
  }
  ll ans=0;
  for(ll i=0;i<n;i++)
  {
      string ss=v[i];
      //cout<<mp[ss[0]]<<endl;
     ll first_classroom=0,second_classroom=0;
      if(mp[ss[0]]>2)
      {
          first_classroom=mp[ss[0]]/2;
          if(mp[ss[0]]%2)second_classroom=(mp[ss[0]]/2) +1;
          else second_classroom=mp[ss[0]]/2;
      }
      if(first_classroom>1)
      {
          ans+=(first_classroom*(first_classroom-1))/2;
      }
      if(second_classroom>1)ans+=(second_classroom*(second_classroom-1))/2;

      mp[ss[0]]=0;
  }
     cout<<ans<<endl;
}

//Alhamdulillah...
