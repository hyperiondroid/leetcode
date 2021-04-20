#include <vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int len = height.size();
        int vol = 0;
        int l = 0, r = len-1;
        while(r>=l){
            
            int v = min(height[l],height[r])*(r-l);
            if(vol < v) vol = v;
            //cout<<"l: "<<height[l]<<" r: "<<height[r]<<" v: "<<v<<" vol: "<<vol<<endl;
            if(height[l]<height[r]) {
                int c = height[l];
                l++;
                while(l<len && height[l]<c){
                    c=height[l]; l++;
                }
            }
            else {
                int c = height[r];
                r--;
                while(r>=0 && height[r]>c){
                    c=height[r]; r--;
                }
            }
        }
        
        return vol;
    }
};