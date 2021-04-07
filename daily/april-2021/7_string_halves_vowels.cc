/*
https://leetcode.com/explore/challenge/card/april-leetcoding-challenge-2021/593/week-1-april-1st-april-7th/3699/
*/

#include<string>
using namespace std;

class Solution {
public:
    bool halvesAreAlike(string s) {
        int len = s.length();
        int lc =0, rc = 0;
        for(int i=0, j = len -1 ; i < len/2 ;){
            if(s[i] == 'a' || s[i] == 'e' ||s[i] == 'i' ||s[i] == 'o' ||s[i] == 'u' ||
              s[i] == 'A' ||s[i] == 'E' ||s[i] == 'I' ||s[i] == 'O' ||s[i] == 'U'){
                    lc++;
            }
            if(s[j] == 'a' || s[j] == 'e' ||s[j] == 'i' ||s[j] == 'o' ||s[j] == 'u' ||
              s[j] == 'A' ||s[j] == 'E' ||s[j] == 'I' ||s[j] == 'O' ||s[j] == 'U'){
                    rc++;
            }
            
            i++; j--;
        }
        return lc == rc;
    }
};