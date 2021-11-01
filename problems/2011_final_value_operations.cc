#include "generic.h"

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int X = 0;
        for(auto op : operations){
            if(op[0]=='+' || op[2]=='+')
                X++;
            else
                X--;
        }
        return X;
    }
};