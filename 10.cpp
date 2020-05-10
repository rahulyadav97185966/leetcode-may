// Find the Town Judge
class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        vector<int> deg(N + 1, 0);
        
        for (auto edge : trust) deg[edge[1]]++, deg[edge[0]]--;
        
        for (int i = 1; i <= N; i++) 
            if (deg[i] == N - 1) 
                return i;
        
        return -1;
    }
};
