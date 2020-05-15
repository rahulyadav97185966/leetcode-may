//Maximum Sum Circular Subarray

class Solution {
public:
    int maxSubarraySumCircular(vector<int>& A) {
        
        int n = A.size();
        int nres = INT_MIN, pres = INT_MIN, tsum = 0, psum = 0, nsum = 0;
        
        for (int i = 0; i < A.size(); i++) {
            tsum += A[i]; nsum += -A[i]; psum += A[i];
            nres = max(nres, nsum);
            pres = max(pres, psum);
            if (nsum < 0) nsum = 0;
            if (psum < 0) psum = 0;
        }
        
        return max(tsum+nres == 0 ? INT_MIN : tsum+nres, pres);
    }
};
