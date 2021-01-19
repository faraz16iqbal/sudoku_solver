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

 ll factorial(ll n){
  if(n==0 || n==1)
    return 1;
  return (n*factorial(n-1));
 }

void solve(){

  int n, x, y;
  ll sum = 0;
  cin>>n>>x>>y;
  vi v(n, 0);
  vi revextra,extra, arr;



  for(auto &i :v)
    cin>>i;

  int i = 0;

  for(; i<n; i++){
    if(sum >= x && sum <=y){
      cout<<0;
      return ;
    }
    if(sum + v[i] <=y){
      arr.push_back(v[i]);
      sum+=v[i];
    }
    else{
      // extra.push_back(v[i]);
      break;
    }
  }

  for(; i<n; i++){
    extra.push_back(v[i]);
  }

  // ll sum2 = sum;

  sort(extra.rbegin(), extra.rend());

  for(int i=0; i<arr.size(); i++){
    for(int j=0; j<extra.size(); j++){
      ll sum2;
      if(arr[i] > extra[j])
        sum2 = sum+(arr[i]-extra[j]); 
      else
        sum2 = sum+(-arr[i]+extra[j]); 

      cout<<sum2<<" ";
      if( sum2>=x && sum2<=y){
        cout<<1;
        return ;
      }
      if(i==arr.size()-1){
        cout<<-1;
        return ;
      }
      for(int k=0; k<extra.size(); k++){
        if(j==k)
          continue;
        if(arr[i+1] > extra[k])
        sum2 = sum2+(arr[i+1]-extra[k]); 
      else
        sum2 = sum2+(-arr[i+1]+extra[k]); 
         if( sum2>=x && sum2<=y){
          cout<<2;
          return ;
        } 
      }
    }
  }

  cout<<-1;



  }

  // cout<<-1<<" ";


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
  
