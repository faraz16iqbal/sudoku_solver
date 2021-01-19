   #include<bits/stdc++.h>
   using namespace std;

   typedef long long ll;
   typedef vector <ll> vi;
   typedef set <ll> S;
   typedef multiset <ll> msll;
   typedef queue <ll> qll;
   typedef map <ll, ll> mll;
   typedef pair <ll, ll> pll;
   typedef vector <pair <ll , ll> > vpll;

   // bool coprime(int a, int b) { 
         
   //     if ( __gcd(a, b) == 1) 
   //         return 1; 
   //     else
   //         return 0;         
   // } 

   void solve(){
      // transform(a.begin(), a.end(), a.begin(), ::tolower); 
      // transform(b.begin(), b.end(), b.begin(), ::tolower); 
       // str.erase(remove(str.begin(), str.end(), ' '), str.end()); 


      }

      
   int nextPrime(int N) 
   { 

    if (N <= 1) 
        return 2; 

    int prime = N; 
    bool found = false; 

    while (!found) { 
        prime++; 

        // if (isPrime(prime)) 
            found = true; 
    } 

    return prime; 
   } 

   pair<int, int> reduceFraction(int x, int y) 
   { 
       int d; 
       d = __gcd(x, y); 
     
       x = x / d; 
       y = y / d; 

       pair<int, int> ans = {x,y};

       return ans;

     
   } 

      bool isSum(int n){
         int c = 0;
         for(int i=0; i<=n;i++){
            c+=i;
         }
         if(c==n)
            return true;
         else
            return false;
      }



   ll countOdd(ll L, ll R){  
     
       ll N = (R - L) / 2; 
     
       // if either R or L is odd  
       if (R % 2 != 0 || L % 2 != 0)  
           N += 1; 
     
       return N; 
   } 


      void subset(string ip,string op,unordered_map<string,int> &m, int &c)
   {
      if((int)ip.size()==0)
      {
         m[op]++;
         if(m[op]==1){
         cout<<op<<"\n";
         int c1 = count(op.begin(), op.end(), '1');
         if(c1 %2==0)
            c++;
      }
         return;
      }
      string op1=op,op2=op;
      // op2.push_back(ip[0]);
      // ip.erase(ip.begin()+0);
      subset(ip.substr(1),op2,m,c);
      subset(ip.substr(1),op1 + ip[0],m,c);
   }

   void permute(string a, int l, int r, int &c) 
{ 
    if (l == r){ 
        cout<<a<<endl; 
        if((count(a.begin(), a.end(), 1))%2==0)
         c++;
     }
    else
    { 
        for (int i = l; i <= r; i++) 
        { 
 
            swap(a[l], a[i]); 
 
            permute(a, l+1, r,c); 
 
            swap(a[l], a[i]); 
        } 
    } 
} 

   bool reverse1(string X, string Y){

    int L = -1; 
  

    int R = -1; 
  
    for (int i = 0; i < X.length(); ++i) { 
  
        if (X[i] != Y[i]) { 
  
            // Store the current index 
            L = i; 
  
            // Break out of the loop 
            break; 
        } 
    } 
  

    for (int i = X.length() - 1; i > 0; --i) { 
        if (X[i] != Y[i]) { 
  
            // Store the current index 
            R = i; 
              break; 
        } 
    } 
  
    reverse(X.begin() + L, 
            X.begin() + R + 1); 
  
    if (X == Y) { 
        return true;
    } 
  
    else { 
         return false; 
    }
}


   void substring(string s, int n, vector<vector<string>> &v){

      set<string> s1;

      for (int i = 0; i < n; i++) 
        for (int len = 1; len <= n - i; len++){
            v[len].push_back(s.substr(i, len));
            s1.insert(s.substr(i, len));
            cout<<s.substr(i, len)<<endl;
         }

         // if(count(s.begin(), s.end(), '1') %2 == 0){
         //    cout<<s1.size();
         //    return;
         // }

         int num = 0;

         for(int i=3; i<=n; i++){
            for(int j=0; j<v[i].size();j++){
               if(count(v[i][j].begin(), v[i][j].end(), '1')!=0 ){
                  for(int k=j+1; k<v[i].size(); k++){
                     if(v[i][j] == v[i][k])
                        continue;
                     bool rev = reverse1(v[i][j], v[i][k]);
                     if(rev){
                        num++;
                        // cout<<rev<<endl;
                     }
                  }
               }


            }
         }


         cout<<s1.size()-num;
         // cout<<"\n\n";
         

   }

   void solve2(){
      int x;
      cin>>x;
      if(x%10==0){
         cout<<-1;
         return ;
      }

      if(x<10){
         cout<<x;
         return ;
      }

      // if()
   }


   void solve3(){

      int n;
      cin>>n;
      if(n==1){
         cout<<9;
         return ;
      }

      if(n<=9){
         for(int i=9; i>9-n; i--){
            cout<<i;
         }
         return ;
      }
      else{

        int first = n/10;
         int rem = n%10;
         int k = n-rem;
         int num = 9;
         for(int j=0; j<first; j++)
           for(int i=9; i>=0; i--){
              cout<<num;
              num--;
              if(num==-1)
                num=9;
           }

        num=1;
        for(int i=0; i<rem;i++){
          cout<<num++;
          if(num==10)
            num=0;
        }
         // for()

      //    for(int i=9; i>=1; i--){
      //       cout<<i;
      //    } 
      //    n-=9;
      //    int k = 0;
      //    while(n!=0){
      //       if(k==10){
      //          k=0;
      //       }
      //       cout<<k;
      //       k++;
      //       n--;
      //    }
      // }

   }
}
      

   int main() 
   { 
      ios_base::sync_with_stdio(false);
      cin.tie(NULL); 
            
         // #ifndef ONLINE_JUDGE 
         // freopen("input.txt", "r", stdin); 
         // freopen("output.txt", "w", stdout); 
         // #endif 
      
      int t=1;
      cin>>t;
      while(t--) 
      { 
         // solve2();
         solve3();
         cout<<"\n";

      }
      return 0;
   } 
      

   // void subset(string ip,string op,map<string,int> &m)
   // {
   //    if((int)ip.size()==0)
   //    {
   //       m[op]++;
   //       if(m[op]==1)
   //       cout<<op<<"\n";
   //       return;
   //    }
   //    string op1=op,op2=op;
   //    // op2.push_back(ip[0]);
   //    // ip.erase(ip.begin()+0);
   //    subset(ip.substr(1),op2,m);
   //    subset(ip.substr(1),op1 + ip[0],m);
   // }

   // void subset2(string ip,string op)//case change permuation
   // {
   //    if((int)ip.size()==0)
   //    {
   //          cout<<op<<"\n";
   //       return;
   //    }

   //    if(isalpha(ip[0])){
   //       string op1=op,op2=op;
   //       char lower = tolower(ip[0]); 
   //       char upper = toupper(ip[0]);
   //       subset(ip.substr(1), op1+lower);
   //       subset(ip.substr(1), op1+upper);
   //    }
   //    else{   
   //       subset(ip.substr(1),op + ip[0]);
   //    }
   // }


   // void solve(){ //K frequent numbers 
   //    // transform(a.begin(), a.end(), a.begin(), ::tolower); 
   //    // transform(b.begin(), b.end(), b.begin(), ::tolower); 
   //    int n,k;
   //    cin>>n>>k;
   //    vector<int> v;
   //    unordered_map<int,int> m;
   //    for(int i=0; i<n;i++){
   //       int x;
   //       cin>>x;
   //       v.push_back(x);
   //       m[x]++;
   //    }

   //    priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
   //    for(auto i = m.begin(); i!=m.end(); i++){
   //       pq.push({i->second, i->first});
   //       if(pq.size() > k){
   //          pq.pop();
   //       }
   //    }

   //    while(!pq.empty()){
   //       cout<<pq.top().second<<endl;
   //       pq.pop();
   //    }

   // }

      //Comparitive overloaded
      // sort(s.begin(), s.end(),[&] (const string &s, const string &t) {
      // return s.size() < t.size();