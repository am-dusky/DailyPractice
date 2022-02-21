#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
 
  ll n;
  cin>>n;
  ll  arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  int count=0;
  for(int i=1;i+1<n;i++){
    if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
      count++;
      if(i+2<n){
        arr[i+1]=max(arr[i],arr[i+2]);
      }
      else{
        arr[i+1]=arr[i];
      }
    }
  }
  cout<<count<<"\n";
  for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
  cout<<"\n";
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
