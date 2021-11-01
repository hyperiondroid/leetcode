#include <string>
using namespace std;
class Solution {
public:
    bool validPalindrome(string s) {
        // aba - true
        // abca - true
        // abc - false

        int l = 0;
        int r = s.length() - 1;
        bool corrected = false;
        while(l<r){
            if(s[l++] != s[r--]){
                if(corrected)
                    return false;
                else
                    corrected = true;
            }
        }

        return true;
    }
};