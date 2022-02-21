// Codeforces Round #771 (Div. 2)
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
  
  ll n;
  cin>>n;
  ll arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  int flg=0;
  for(int i=1;i<n;i++){
    if(arr[i]<arr[i-1]){
      flg=1;
      break;
    }
  }
 
  if(flg==0){
    cout<<"YES\n";
  }
  else{
    vector<int> v1,v2,even,odd;
    for(int i=0;i<n;i++){
      if(arr[i]%2==0){
        v2.push_back(arr[i]);
        even.push_back(arr[i]);
      }
      else{
        v1.push_back(arr[i]);
        odd.push_back(arr[i]);
      }
    }

    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

    if(v1==odd && v2==even){
      cout<<"YES\n";
    }
    else{
      cout<<"NO\n";
    }
  }
}

int main(){
  ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input1.txt","r",stdin);
    freopen("output1.txt","w",stdout);
#endif

  int t;
  cin>>t;
  while(t--){
    solve();
    }
    return 0;
}
