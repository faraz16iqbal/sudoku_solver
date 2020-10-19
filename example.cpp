#include<bits/stdc++.h> 
using namespace std;

void solve(long a){
   // transform(a.begin(), a.end(), a.begin(), ::tolower); 
   // transform(b.begin(), b.end(), b.begin(), ::tolower); 

   int count = 0;
   string s = to_string(a);

   for(int i=0; i<s.length(); i++){
      if(s[i]=='4' || s[i] == '7')
         count++;
   }

   string s2 = to_string(count);
   
   if(count == 0){
      cout<<"NO";
      return;
   }

   for(int j=0; j<s2.length(); j++){
      if(s[j]!= '4' && s[j]!= '7'){
         cout<<"NO";
         return ;
      }  
   }

   cout<<"YES";

}

int main() 
{ 
   ios_base::sync_with_stdio(false);cin.tie(NULL); 
      
   // #ifndef ONLINE_JUDGE 
   // freopen("input.txt", "r", stdin); 
   // freopen("output.txt", "w", stdout); 
   // #endif 
   
   int t=1;
   // cin>>t;
   while(t--) 
   { 
      long a;
      cin>>a;
      solve(a);
      cout<<"\n";
   }
   return 0; 
} 
