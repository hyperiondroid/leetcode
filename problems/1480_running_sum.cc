#include "generic.h"
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int s = nums[0];
        for(int i=1;i<nums.size();i++){
            s+=nums[i];
            nums[i] = s;
        }
        
        return nums;
    }
};