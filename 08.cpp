//Check If It Is a Straight Line
class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& c) 
    {
        if(c.size()==2)
          return true;
      float m= 1.0*(c[1][1]-c[0][1])/(c[1][0]-c[0][0]);
      for(int i=2;i<c.size();i++)
      {
        float temp=m;
        m=1.0*(c[i][1]-c[i-1][1])/(c[i][0]-c[i-1][0]);
        if(m!=temp)
          return false;
      }
      return true;
          
    }
};
