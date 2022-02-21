#include<bits/stdc++.h>
using namespace std;
#define ll long long


int f(string s){
  int i=0;
  int j=s.length()-1;
  while(i<=j){
    if(s[i]!=s[j]){
        return 0;
        break;
    }
    else{
      i++;
      j--;
    }
  }
  return 1;
}
void solve(){
  ll n,k;
  string s;
  cin>>n>>k>>s;

  if( k==0){
    cout<<1<<"\n";
  }
  else{
    if(f(s)){
      cout<<1<<"\n";
    }
    else{
         cout<<2<<"\n";
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
