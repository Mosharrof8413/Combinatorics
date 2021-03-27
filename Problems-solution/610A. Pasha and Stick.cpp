
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mk make_pair
#define mx 100000

int main()
{
  ll t=1;
  //cin>>t;
  while(t--)
  {
    ll n;
    cin>>n;
    if(n%2)
    {
        cout<<0<<endl;
        return 0;
    }
    ll half=n/2;
    if(half%2==0)half--;
    ll ans=half/2;
    cout<<ans<<endl;
  }
}

//Alhamdulillah...
