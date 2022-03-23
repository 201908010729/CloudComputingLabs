#include<iosteam>
using namespace std;
pubilc class sudukusolve
{
       private bool consistent(int[][] board,int row,int col,int c)
    {
        int S=board.length;
        for(int i=0;i<S;i++)
        {
            if(board[row][i] == c) return false;
            if(board[i][col] == c) return false;
        }
        int rowStart = row - row % side; 
        int colStart = col - col % side;
        
        for(int m = 0; m < side; m++){
            for(int k = 0; k < side; k++){
                if(board[rowStart + k][colStart + m] == c) return false;
            }
        }
        return true;
    }
    private void solve(int[][] board,int dex)
    {
        final int S=board.length;//待会改
        if(ind==S*S)
        {
            cout<<board<<'/n';
        }
        else 
        {
            int row=dex/S;
            int col=dex/S;
            if(board[row][col]!=0) solve(board,dex+1);
            else
            {
                for(int i=0;i<9;i++)
                {
                    if(consistent(board;i<=9;i++))
                    {
                        board[row][col] = i;
                        solve(board,dex+1);
                        board[row][col] = 0;
                    }
                }
            }
        }
    }
    pubilc int** runsolver(int[][] sudoku)
    {
        solve(sudoku,0);
        return sudoku;
    }
}
int main()
{
    int sudo[9][9];
    int answer[9][9];
    while(1)
    {
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                cin>>sudo[i][j];
            }
        }
        anser[9][9]=sudukusolve.runsolver(sudo[9][9]);
    }
    return 0;
}