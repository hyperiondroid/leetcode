/*
https://leetcode.com/explore/challenge/card/april-leetcoding-challenge-2021/593/week-1-april-1st-april-7th/3692/
*/

#include<unordered_map>
#include<vector>

using namespace std;

class Solution {
public:
    int largestUniqueNumber(vector<int>& A) {
        unordered_map<int,int> ref;
        for(int i=0; i< A.size(); i++){
            ref[A[i]]++;
        }
        
        int ret = -1;
        for(int i=0; i< A.size(); i++){
            if(ref[A[i]]==1 && A[i]> ret) ret = A[i];
        }
        
        return ret;
    }
};