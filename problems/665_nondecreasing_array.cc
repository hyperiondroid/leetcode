
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int anom = 0;
        int l = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] >= nums[i-1]){
                l++;
            }
            else if(nums[i] < nums[i-1]){
                anom++;
                if(anom == 1){
                    if(l>1){
                        if(nums[i] < nums[i-1] && nums[i]>=nums[i-2]) nums[i-1] = nums[i];
                        else nums[i] = nums[i-1];
                    }
                    
                }
            }
            if(anom > 1) return false;
        }
        
        return true;
    }
};