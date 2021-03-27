//permutaion partitions cf c...
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mk make_pair
#define mxx 10000
#define M  998244353
ll mod(ll x)
{
    return ((x%M+M)%M);
}
ll mul(ll a,ll b)
{
    return mod(mod(a)*mod(b));
}

int main()
{
  ll t=1;
 // cin>>t;
  while(t--)
  {
      ll n,k;
      cin>>n>>k;
      vector<ll>a(n),v;
      for(ll i=0;i<n;i++)cin>>a[i];
      ll w=k,p=n;
      ll ans=0;
      while(w--)
      {
        ans+=p;
        p--;
      }
      //cout<<ans<<endl;
      ll re=n-k+1;
      for(ll i=0;i<n;i++)
      {
          if(a[i]>=re)v.pb(i);
      }
      sort(v.begin(),v.end());
      ll total_ways=1;
      for(ll i=0;i<v.size()-1;i++)            //n=7 , k=3
                                             //2 7 3 1 5 4 6    largest 3 values position 1 4 6    between 1 and 4 there possible 4-1= 3 partitions...between 4 and 6 there possible 6-4=2 partitions
                                             // in this way the total partitions will be 3*2=6...
      {
          total_ways=mul(total_ways,(v[i+1]-v[i]));
      }
      cout<<ans<<" "<<total_ways<<endl;

  }
}

//Alhamdulillah...
