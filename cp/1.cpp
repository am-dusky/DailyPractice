//codeforce 748 div3

#include <bits/stdc++.h>
#define ll long long
using namespace std;


void solve(){
  ll n;
  cin>>n;
  ll arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  sort(arr,arr+n);
  if(arr[0]==arr[n-1])
  {
    cout<<-1<<"\n";
    return;
  }
  ll ans=0;
  for(int i=0;i<n;i++){
     ans=__gcd(ans,arr[i]-arr[0]);
    }
    cout<<ans<<"\n";

}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("inp1.txt","r",stdin);
    freopen("out.txt","w",stdout);
#endif
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
