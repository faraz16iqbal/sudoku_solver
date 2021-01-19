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

 int arr[505][505];  


void solve(){

    int n;
    cin>>n;
    
    vi v(n);

    for(auto &i: v){
      cin>>i;
    }

    sort(v.begin(), v.end());

    int first = v[0];
    int div = 1;
    bool flag = false;

    for(int i=1; i<=v[0]; i++){
      flag = false;
      for(int j=0; j<n; j++){
        if(v[j]%i != 0){
          flag = true;
          break;
        }
      }
      if(flag){
        continue;
      }
      else{
        div = i;
      }
    }

    ll ans = 0;

    for(auto &i: v){
      ans+= (i/div);
    }

    cout<<ans;

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
  
