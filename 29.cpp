//Course Schedule

class Solution {
public:
    
    vector<int>adj_list[100005];
    int col[100005];
    bool cyc=false;
    
    void DFS(int u)
    {   
        col[u]=1;
        for(auto v:adj_list[u])
        {
            if(col[v]==0)
            {
                DFS(v);
            }
            if(col[v]==1)
            {
                cyc=true;
            }
        }
        col[u]=2;
    }
    
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) 
    {
        for(int i=0;i<prerequisites.size();i++)
        {
            int u=prerequisites[i][0];
            int v=prerequisites[i][1];
            adj_list[v].push_back(u);
        }
        memset(col,0,sizeof(col));
    
        for(int i=0;i<numCourses;i++)
        {
            if(col[i]==0)
                DFS(i);
        }
        if(cyc)
            return false;
        else
            return true;
    }
};
