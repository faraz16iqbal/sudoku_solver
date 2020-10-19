#include<bits/stdc++.h> 
using namespace std;

void solve(string s){
   // transform(a.begin(), a.end(), a.begin(), ::tolower); 
   // transform(b.begin(), b.end(), b.begin(), ::tolower); 
   int c = 0;
   for(int i=0; i<s.length(); i++){
    if(islower(s[i]))
      c++;
   }

   int half = s.length()/2;


   if(c==half){
    transform(s.begin(), s.end(), s.begin(), ::tolower); 
   cout<<s;
   }
   else if(c < half){
   transform(s.begin(), s.end(), s.begin(), ::toupper); 
   cout<<s;
   }

   else{
   transform(s.begin(), s.end(), s.begin(), ::tolower); 
   cout<<s;
   }

}

int main() 
{ 
   ios_base::sync_with_stdio(false);cin.tie(NULL); 
   
   #ifndef ONLINE_JUDGE 
   freopen("input.txt", "r", stdin); 
   freopen("output.txt", "w", stdout); 
   #endif 
   
   int t=1;
   // cin>>t;
   while(t--) 
   { 
      string s;
      cin>>s;
      solve(s);
      // cin>>a>>b;
      // solve(a,b);
      cout<<"\n";
   } 
   
   return 0; 
} 
