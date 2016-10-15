class Solution {
public:
    /**
     * Calculate the total number of distinct N-Queen solutions.
     * @param n: The number of queens.
     * @return: The total number of distinct solutions.
     */
    int totalNQueens(int n) {
        // write your code here
        column = vector<bool> (n,false);
        diag = vector<bool> (2*n,false);
        anti_diag = vector<bool> (2*n,false);
        placement = vector<int> (n,0);
        N=n;
        count = 0;
        if (n==1) {
            return 1;
        } else {
            countHelper(0);
            return count;
        }
    }

private:
    vector<bool> column;
    vector<bool> diag;
    vector<bool> anti_diag;
    vector<int> placement;
    int count;
    int N;
    void countHelper(int row);
    bool isOK(int current_column, const int row);
};
bool Solution::isOK(int current_column, const int row) {
    return (this->column)[current_column] == false&&
        (this->diag)[current_column+row] == false &&
        (this->anti_diag)[row-current_column+N] == false;
}
void Solution::countHelper(int row) {
    if (row==N) {
        count++;
        return;
    } else{
        for (int i = 0; i < N; i++) {
            if(isOK(i,row)) {
                placement[row] = i;
                diag[row+i] = true;
                anti_diag[row+N-i] = true;
                column[i] = true;
                countHelper(row+1);
                diag[row+i] = false;
                anti_diag[row+N-i] = false;
                column[i] = false;
            }
        }
    }
}
