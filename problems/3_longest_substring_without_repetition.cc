/* https://leetcode.com/problems/longest-substring-without-repeating-characters/ */
#include <vector>
#include <bits/stdc++.h>
#include <string>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = s.length();
        if(len == 0 || len ==1) return len;
        
        int map[96];
        for(int i=0;i<96;i++){
            map[i] = -1;
        }

        int l, r = 0;
        int max_sublen = 0;
        while(r < len){
            char c = s[r];
            int prev_seen = map[c - 32];
            if(prev_seen>=0 && prev_seen >= l && prev_seen<r){
                l = prev_seen+1;
            }
            if((r - l + 1) > max_sublen) max_sublen = r - l + 1;
            map[c-32] = r;
            r++;
        }
        return max_sublen;
    }
private:
    
};

int main(){
    Solution s;
    cout<<s.lengthOfLongestSubstring("abba")<<endl;
    return 0;
}

