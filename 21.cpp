class Solution {
public:
    int countSquares(vector<vector<int>>& mat) 
    {
        int ans = 0;
        for(int i=0;i<mat.size();i++)
        for(int j=0;j<mat[0].size();ans+=mat[i][j++])
        if(mat[i][j]&&i&&j)
        mat[i][j]+=min({mat[i-1][j-1],mat[i-1][j],mat[i][j-1]});
        return ans;
    }
};
