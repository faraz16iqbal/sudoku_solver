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
     #define all(v) v.begin(), v.end()

     int arr[5010][5010];
     int sec[5010];


ll helper(ll i, ll done, ll n, ll k, vll &v){
  if(done>=k && sec[i] - done >=k){
    return 0;
  }

  else if(i >=n ){
    return 1e10;
  }
  //Memoized
  else if(arr[i][done] != -1){
    return arr[i][done];
  }

  ll x = helper(i+1, min(done + v[i], sec[i]-done), n,k,v);
  ll y = helper(i+1, min(sec[i]-done+v[i], done), n,k,v);

  return arr[i][done] = 1 + min(x, y);


}



  ll answer(vll &v, ll n, ll k){
    for(ll i=0; i<n/2; i++){
      swap(v[i], v[n-i-1]);
    }

    for(ll i=0; i<=n+10; i++){
      sec[i] = 0;
      for(ll j=0; j<=k+10; j++){
        arr[i][j]=-1;
      }
    }


    for(ll i=1; i<=n; i++)
      sec[i] = sec[i-1] + v[i-1];
      ll ans = helper(0,0,n,k,v);
      if(ans > 1e9){
        return -1;
      }
      else{
        return ans;
      }
  }

  void solve()
  {
    
    int n, k;
    cin>>n>>k;
    vi v(n, 0);

    for(int i=0; i<n; i++){
      cin>>v[i];
    }

    sort(v.begin(), v.end());
    if(n==1){
      cout<<-1;
      return ;
    }

    int sum = 0;
    map<int, int> m1;
    m1[v[n-1]]++;
    sum = v[n-1];
    int z = -1;

    for(int i=n-2; i>=0; i--){
      map<int, int> m2;
      sum+=v[i];
      for(auto it1= m1.begin(); it1!=m1.end(); it1++){

        int num = it1 -> first;
        m2[num]++;
        m2[v[i]]++;
        m2[num+v[i]]++;
        if(((num+v[i]) >= k) &&((sum-num-v[i]) >= k)){
          z = n-i;
          break;
        }
        if(((v[i]) >= k) &&((sum - v[i]) >=k)){
          z=n-i;
          break;
        }
      }

      if(z!=-1){
        break;
      }
      m1=m2;

    }
    cout<<z;



    // cout<<"Hello";
    // cout<<answer(v, n, k);
    return ;

    
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
        
