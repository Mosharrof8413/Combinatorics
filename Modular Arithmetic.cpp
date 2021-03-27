
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mk make_pair
#define mx 1000000
#define M  1000000007
ll mod(ll x)
{
    return ((x%M+M)%M);    // x will be negative or positive
}
ll add(ll a,ll b)
{
    return mod((mod(a)+mod(b)));
}
ll mul(ll a,ll b)
{
    return mod(mod(a)*mod(b));
}

int main()
{
  ll a,b;
  cin>>a>>b;
  cout<<add(a,b)<<endl;
  cout<<mul(a,b)<<endl;
}

//Alhamdulillah...
