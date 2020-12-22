   #include<bits/stdc++.h>
   using namespace std;


   void printBoard(int board[][9]){
    for(int i=0 ;i<9; i++){
      for(int j=0; j<9; j++){
        cout<<board[i][j]<<" ";
      }
      cout<<"\n";
    }
   }

   bool isValid(int board[][9], int x, int y, int val){
    for(int i=0; i<9; i++ ){
      if(board[i][y] == val)
        return false;
    }

    for(int j=0; j<9; j++){
      if(board[x][j] == val)
        return false;
    }

    //checking in submatrix
    int smi = (x/3) * 3;
    int smj = (y/3) * 3;

    for(int i=0; i<3; i++){
      for(int j=0; j<3; j++){
        if(board[smi + i][smj + j] == val){
          return false;
        }
      }
    }

    return true;

   }

   long c = 0;

   void sudoku(int board[][9], int i, int j){

    if(i == 9){
      printBoard(board);
      exit(10); 
      return ;
    } 

    int ni = 0;
    int nj = 0;

    if(j == 8){
      ni = i+1;
      nj = 0;
    } else{
      ni = i;
      nj = j+1;
    }

    if(board[i][j] != 0){
      sudoku(board, ni, nj);
    } else { 
      for(int po = 1; po<=9; po++){
        if(isValid(board, i, j, po)){
          board[i][j] = po;
          sudoku(board, ni, nj);
          board[i][j] = 0;
        }
      }
    }

   }

   void solve(){

    int board[9][9];

    //input
    for(int i=0; i<9; i++){
      for(int j=0; j<9; j++){
        cin>>board[i][j];
      }
    }

    sudoku(board, 0, 0);
    // printBoard();

    }

      

   int main() 
   { 
      ios_base::sync_with_stdio(false);
      cin.tie(NULL); 
            
           #ifndef  ONLINE_JUDGE 
           freopen("input.txt", "r", stdin); 
           freopen("output.txt", "w", stdout); 
           #endif 
      
      int t=1;
      // cin>>t;
      while(t--) 
      { 
         solve();
         cout<<"\n";

      }
      return 0;
   } 
      
