#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector <ll> vll;
typedef vector <int> vi;
typedef set <ll> S;
typedef set <int> si;
typedef queue <ll> qll;
typedef map <ll, ll> mll;
typedef pair <ll, ll> pll;
typedef vector <pair <ll , ll> > vpll;
#define all(v) v.begin(),v.end()


void solve(){
  ll n;
  cin>>n;
  vll arr[n];
  unordered_map<ll,ll> mp;
  for(int i=0; i<n; i++)

  {
    ll m;
    cin>>m;
      for(int j=0; j<m; j++)
    {
      ll x;
      cin>>x;
      mp[abs(x)]++;
      arr[i].push_back(x);
    }
    sort(arr[i].begin(), arr[i].end());
  }


  ll ans=0;
  ll ex=0;
  for(auto x:mp)
  {
    if(x.second>1) ex++;
  }
  for(int i=0; i<n; i++)
  {
    for(int j = 0; j<arr[i].size(); j++)
    {
      ll curr=0;
      if(mp[abs(arr[i][j])]>1)
      {
        if(arr[i][j]>0)
        {
          curr= (arr[i].size())-(j+1);
        }
        else
        {
          curr=j;
        }
      }
      else
      {
        if(arr[i][j]>0)
        {
          curr = lower_bound(all(arr[i]),-1*arr[i][j])-arr[i].begin();
        }
        else
        {
          curr = (arr[i].size())-(upper_bound(all(arr[i]),-1*arr[i][j])-arr[i].begin());
        }
      }
      ans+=curr;
    }
  }
  cout<<ans+ex;
}

int main() 
{ 
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 
        
   // #ifndef  ONLINE_JUDGE 
   // freopen("input.txt", "r", stdin); 
   // freopen("output.txt", "w", stdout); 
   // #endif 
  
  int t=1;
  cin>>t;
  while(t--) 
  { 
     solve();
     cout<<"\n";

  }
  return 0;
}