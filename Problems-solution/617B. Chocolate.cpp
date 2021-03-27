
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mk make_pair
#define mxx 1000000

int main()
{
  ll t=1;
 // cin>>t;
  while(t--)
  {
     ll n;
     cin>>n;
     vector<ll>a(n);
     ll one=0;
     for(ll i=0;i<n;i++)
     {
         cin>>a[i];
         if(a[i] &1)one++;
     }
     if(one==0)
     {
         cout<<0<<endl;
         return 0;
     }
     stack<ll>s;
     ll ans=1;
     for(ll i=0;i<n;i++)
     {

         if(a[i]==1)
         {
             if(!s.empty())
             {
                ll dis=(i-s.top());
                ans*=dis;

             }
              s.push(i);
          }
     }
     //ll l=s.top();
   cout<<ans<<endl;
}
}

//Alhamdulillah...
