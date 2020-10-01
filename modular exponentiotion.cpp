#include<bits/stdc++.h>

#define ll long long int
#define watch(x) cout << (#x) << " is " << (x) << endl  //watch function print variable and value for debugging
#define count_ones __builtin_popcountll                  // count_ones(9) is equal to 2 valid for ll also
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define fo(i,n) for(ll i=0;i<n;i++)
using namespace std;

ll power(ll x,ll y,ll p)
{
  ll res=1;
  x=x%p;
  if(x==0)
    return 0;
  while(y>0)
  {
    if(y&1)
    {
      res=(res*x)%p;
    }
    y=y>>1;
    x=(x*x)%p;
  }
  return res;
}

int main() {
 #ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
 #endif
       fast_io
 
       ll n,k;
       while(cin>>n>>k && n!=0)
       {
         ll p=10000007;
         ll s1=power((n-1),k,p)+power((n-1),(n-1),p);
         ll s2=power(n,k,p)+power(n,n,p);
          
         ll ans=2*s1+s2;

         cout<<ans<<"\n";
       }

   return 0;
 }