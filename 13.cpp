//Remove K Digits
class Solution {
public:
	string removeKdigits(string &num, int k) {
		if(k == 0) return num;
		int id = 0;
		for(; id < num.size()-1; ++id){
			if(num[id] > num[id+1]){
				break;    
			}
		}
		if(num.size() > 0) num.erase(num.begin()+id);
		while(num.size() > 1 && num[0] == '0')  num.erase(num.begin());
		if(num.size() == 0) num = "0";
		return removeKdigits(num, k-1);
	}
};
