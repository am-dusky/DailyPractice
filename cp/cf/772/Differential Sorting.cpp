#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
 
  ll n;
  cin>>n;
  ll  arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  if(arr[n-2]>arr[n-1]){
    cout<<-1<<"\n";
  }
  else if(arr[n-1]>=0){
    cout<<n-2<<"\n";
    for(int i=0;i<n-2;i++){
      cout<<i+1<<" "<<n-1<<" "<<n<<"\n";
    }
  }
  else{
    int flag=0;
    for(int i=1;i<n;i++){
      if(arr[i]<arr[i-1]){
        flag=1;
        break;
      }
    }
    if(flag==0){
      cout<<0<<"\n";
    }
    else{
      cout<<-1<<"\n";
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
