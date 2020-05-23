//Interval List Intersections

class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& a, vector<vector<int>>& b) {
        int i=0,j=0, n = a.size(), m = b.size();
        vector<vector<int>> ans;
        while(i<n && j<m){
            while(i < n && a[i][1] < b[j][0]) i++;
            if(i==n) break;
            while(j < m && b[j][1] < a[i][0]) j++;
            if(j==m) break;
            if(a[i][1] < b[j][0] || b[j][1] < a[i][0]) continue;
            ans.push_back({max(a[i][0],b[j][0]),min(a[i][1],b[j][1])});
            a[i][1] < b[j][1] ? i++ : b[j][1] < a[i][1] ? j++ : (i++, j++);
        }
        return ans;
    }
};
