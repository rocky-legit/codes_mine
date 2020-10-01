#include<bits/stdc++.h>

#define ll long long int
#define watch(x) cout << (#x) << " is " << (x) << endl  //watch function print variable and value for debugging
#define count_ones __builtin_popcountll                  // count_ones(9) is equal to 2 valid for ll also
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define fo(i,n) for(ll i=0;i<n;i++)
using namespace std;
 
int main() {
 #ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
 #endif
       fast_io
 
      int a[5][5];
      int ans=0;
      for(int i=0;i<5;i++)
      {
        for(int j=0;j<5;j++)
          cin>>a[i][j];
      }
       for(int i=0;i<5;i++)
      {
        for(int j=0;j<5;j++)
          {
            if(a[i][j]==1)
            ans=abs(i-2)+abs(j-2);
          }
      }
      cout<<ans<<"\n";

   return 0;
 }