#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
 
  ll n;
  cin>>n;
  ll  arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];

  int sum=0;
  for(int i=0;i<n;i++){
    sum=sum|arr[i];
  }
  cout<<sum<<"\n";
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
} Min Or Sum
