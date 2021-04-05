/* https://leetcode.com/problems/two-sum/ */
#include <vector>
#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int> ref;
        
        int comp;
        for( int i=0; i < nums.size(); i++){
            comp = target - nums[i];
            auto c = ref.find(comp);
            if(c != ref.end()){
                return {c->second, i};
            }
            ref[nums[i]] = i;
        }
        return {};

    }
};

int main(){

    return 0;
}