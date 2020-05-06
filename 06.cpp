//majority element
class Solution {
public:
    int majorityElement( vector<int>& nums ) {
        unordered_map<int, int> numCount;
        for( auto num : nums )
            ++numCount[num];
        
        int count = 1, majority=nums[0];
        for( auto p : numCount )
            if( p.second > count ) {
                count = p.second;
                majority = p.first;
            }
        return majority;
    }
};
