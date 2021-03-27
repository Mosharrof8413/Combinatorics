
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mk make_pair
#define mx 1000000

int main()
{
  ll t=1;
  //cin>>t;
  while(t--)
  {
    ll n,k;
    cin>>n>>k;
    ll max_group=0,min_group=0;
    if(k==1)
    {
        max_group=n*(n-1)/2;
        min_group=max_group;
        cout<<min_group<<" "<<max_group<<endl;
        continue;
    }
    max_group=(n-k+1)*(n-k)/2; // last group contains n-k+1 elements others groups contains 1 ...
    ll per_group=n/k;
    ll remainder=n%k;                                           //nC2=n*(n-1)/2
    ll first_part=(per_group*(per_group-1)*(k-remainder))/2;    // k-n%k groups contains n/k elements....
    ll second_part=((per_group+1)*per_group*remainder)/2;       // n%k groups contains  n/k+1 elements...
    min_group=first_part+second_part;
    cout<<min_group<<" "<<max_group<<endl;
  }
}

//Alhamdulillah...
