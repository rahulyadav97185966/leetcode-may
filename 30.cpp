// K Closest Points to Origin


class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        multimap<float,vector<int>> m1;
        for(int i=0;i<points.size();i++){
            float euclidean_distance = float(sqrt((points[i][0]-0)*(points[i][0]-0) + (points[i][1]-0)*(points[i][1]-0)));
            m1.insert({euclidean_distance,{points[i][0],points[i][1]}});
        }
        vector<vector<int>> ans;
        for(auto v:m1){
            if(K>0){
                ans.push_back({v.second[0],v.second[1]});
                K--;
            }
            else{
                break;
            }
        }
        return ans;
    }
};
