class Solution {
public:
    bool exist(vector<vector<char>>& board, string word)
    {
        int n = board.size(), m = board[0].size();
        for (int i = 0;i < n;i++)
            for (int j = 0;j < m;j++)
                if (bkt(i, j, 0, word, n, m, board))
                    return true;
        return false;
    }
    bool bkt(int i,int j,int k,string& word,int n, int m, vector<vector<char>>& board)
    {
        if (k == word.length())
        {
            return true;
        }

        if (i < 0 || i >= n || j < 0 || j >= m || board[i][j] != word[k])
            return false;

        char temp = board[i][j];
        board[i][j] = '\0';

        if (bkt(i - 1, j, k + 1, word, n, m, board) ||
            bkt(i + 1, j, k + 1, word, n, m, board) ||
            bkt(i, j - 1, k + 1, word, n, m, board) ||
            bkt(i, j + 1, k + 1, word, n, m, board))
            return true;

        board[i][j] = temp;
        return false;
    }
};