//Sort Characters By Frequency

class Solution {
public:
    string frequencySort(string s) {
        vector<pair<char,int>>vp; unordered_map<char,int>mp;
        for(auto x:s) mp[x]++;                                 //store the frequency of characters in a map.
        for(auto x:mp) vp.push_back(x);                        //convert the map into vector of pairs.
		string str="";
        sort(vp.begin(),vp.end(),[](auto a,auto b){return a.second>b.second;});  
        for(auto x:vp)
        {
            char a=x.first; string temp(x.second,a);     
            str+=temp;                                         //store the results in str.
        }
        return str;
    }
};
