#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;
        
        int len = s.length();
        vector<int> pat;
        for(int i=1;i< 2* numRows - 1; i++){
            if(i <= numRows) pat.push_back(i);
            else pat.push_back(numRows - (i-numRows));
        }
        //cout<<"pat: ";
        //for(auto x: pat) cout<<x<<" ";
        //cout<<endl;
        
        vector<int> zig;
        for(int i=0;i<len;i++){
            //cout<<i<<"-"<<i%numRows<<" ";
            zig.push_back(pat[i%(2*numRows - 2)]);
        }
        
        string ret = "";
        for(int i=0;i<len;i++){
            
        }
        
        return ret;
    }
};