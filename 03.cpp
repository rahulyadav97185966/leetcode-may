//Ransom Note
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> cnt; //count letter times in the magazine
        for(auto c : magazine) {
            cnt[c]++;
        }
        for(auto c : ransomNote) {//check if the letter times is able to construct the ransomNote.
            if(cnt.find(c) == cnt.end() || cnt[c] == 0) {
                return false;
            }
            cnt[c]--;
        }
        return true;
    }
};
