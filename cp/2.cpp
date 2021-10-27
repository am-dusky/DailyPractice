#include<bits/stdc++.h>
using namespace std;
#define ll long long



void solve(){
  ll n,v;
  cin>>n>>v;
  ll sum=(n-1)*(n)/2;
  if(v>n)
  {
    cout<<sum<<" "<<n-1<<"\n";
  }
  else{
    ll ans=(n-v)*(n-v+1)/2;
    cout<<sum<<" "<<ans+v-1<<"\n";
  }
}

 
int main()
{
  ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("in1.txt","r",stdin);
    freopen("out1.txt","w",stdout);
#endif

  int t;
  cin>>t;
  while(t--){
    solve();
    }
    return 0;
}
