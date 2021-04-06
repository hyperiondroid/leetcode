/* https://leetcode.com/explore/challenge/card/april-leetcoding-challenge-2021/593/week-1-april-1st-april-7th/3698/
*/
class Solution {
public:
    int minOperations(int n) {
        if(n<3) return n-1;
        
        int a = n - 1;
        int sum = 0;
        for(int i=0; i< n/2;i++) {sum+=a; a-=2;}
        
        //return sum;
        
        return ((n)*(2*a + (n - 2)*-1))/4;
    }
};

int main(){
    return 0;
}