/**
 * Subsets II
 * Given an integer array nums that may contain duplicates, return all possible subsets (the power set).
 * The solution set must not contain duplicate subsets. Return the solution in any order.
 * 
 * Input: nums = [1,2,2]
 * Output: [[],[1],[1,2],[1,2,2],[2],[2,2]]
 * 
 * Constraints:
 * 1 <= nums.length <= 10
 * -10 <= nums[i] <= 10

 * https://leetcode.com/explore/challenge/card/august-leetcoding-challenge-2021/613/week-1-august-1st-august-7th/3837/
 * /
 * 
 */

class Solution {
public:
    
    void printSubset(vector<int> s){
        cout<<"{";
        for(int i = 0; i<s.size(); i++){
            cout<<s[i]<<",";
        }    
        cout<<"}"<<endl;
    }
    
    void subsetRecur(vector<int> nums, vector<int> s, int index, map<vector<int>,int> *smap,               vector<vector<int>> *ret) {
        if (index == nums.size()) {
            if(smap->find(s) == smap->end()){
                printSubset(s);
                ret->push_back(s);
                smap->insert(pair<vector<int>,int>(s,1));
            }     
            return;
        }
        s.push_back(nums[index]);
        subsetRecur(nums, s, index+1, smap, ret);
        s.pop_back();
        subsetRecur(nums, s, index+1, smap, ret);
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        map<vector<int>,int> smap;
        vector<vector<int>> ret;
        
        sort(nums.begin(),nums.end());
        
        int index = 0;
        vector<int> s;
        subsetRecur(nums, s, index, &smap, &ret);
        
        return ret;
    }
};