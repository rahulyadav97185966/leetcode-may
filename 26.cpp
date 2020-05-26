//Contiguous Array

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
     unordered_map<int,int>m;
    m.insert(make_pair(0,-1)); //initially map contains key as -1 and value as 0
    int max_len=0;
    int c=0;
    
    for(int i=0;i<nums.size();i++){
        if(nums[i]==0)      
            c--;       // for every 0 we decrement the count
        else c++;      // for every 1, we increament the count
        
        
        if(m.find(c)!=m.end()) 
            max_len=max(max_len,i-m[c]);
          
        else m.insert(make_pair(c,i));
        
    }
    
    return max_len;
        
    }
};
