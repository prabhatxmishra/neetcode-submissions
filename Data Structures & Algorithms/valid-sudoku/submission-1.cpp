class Solution {
public:

    bool traverse(vector<vector<char>>& board, int sr, int er, int sc, int ec)
    {
        set<int> st;
        for(int i=sr;i<=er;i++)
        {
            for(int j=sc;j<=ec;j++)
            {
                if(board[i][j] == '.') continue;
                int num = board[i][j] - '0';
                if(st.find(num)!=st.end()) return false;
                else
                {
                    st.insert(num);
                }
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        
       //row
       for(int row=0;row<9;row++)
       {
        set<int> st;
        for(int col=0;col<9;col++)
        {
            if(board[row][col]=='.') continue;
            int num = board[row][col] - '0';
            if(st.find(num)!=st.end()) return false;
            else
            {
                st.insert(num);
            }
        }
       }
       //column

       for(int col=0;col<9;col++)
       {
        set<int> st;
        for(int row=0;row<9;row++)
        {
            if(board[row][col]=='.') continue;
            int num = board[row][col] - '0';
            if(st.find(num)!=st.end()) return false;
            else
            {
                st.insert(num);
            }
        }
       }

       //box
        for(int sr=0;sr<9;sr+=3)
        {
            for(int sc=0;sc<9;sc+=3)
            {
                int er=sr+2;
                int ec=sc+2;
                if(traverse(board,sr,er,sc,ec)==false) return false;
            }
        }
        return true;
    }
};