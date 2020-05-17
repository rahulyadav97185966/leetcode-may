//Find All Anagrams in a String

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char, int> map;
        vector<int> res;
        for(auto ch: p)
            map[ch]++;
        int count = map.size();
        int left =0, right = 0;
        while(right < s.size()){
            //expand right edge of window
            if(map.count(s[right])){
                map[s[right]]--;
                if(map[s[right]] == 0)
                    count--;
            }
            right++;
            
            //check balance of the window
            while(count == 0){
                char temp = s[left];
                if(map.count(temp)){
                    map[temp]++;
                    if(map[temp] == 1)
                        count++;
                }
                if(right - left == p.size())
                    res.push_back(left);
                left++;
            }
            
        }
        
        return res;
    }
};
