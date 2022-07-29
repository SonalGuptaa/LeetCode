class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        if (nums.size()<0)
          return 0;
          
        int cs = nums[0];
        int ms = nums[0];
        
        for (int i=1; i<nums.size(); i++)
        {
                        
            if (cs< 0)
            {
                cs = 0;
            }
            cs = cs + nums[i];
            if (cs > ms)
            {
                ms = cs;
            }
                
        }
        
        return ms;
    }
};