class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        if(x/10 == 0) return true;
        if(x%10 == 0) return false;
        int p = 0;
        int num = x;
        while(x>0){
            x/=10;
            p++;
        }
        //cout<<p<<endl;
        static int pow10[10] = {
        1, 10, 100, 1000, 10000, 
        100000, 1000000, 10000000, 100000000, 1000000000
        };
        for(int i=0;i<p/2 && num>0;i++){
            int k = p-2*i-1;
            //cout<<"pow:"<<pow10[k]<<endl;
            if(num%10 != num/pow10[k]) return false;
            num=num%pow10[k];
            //cout<<" num: "<<num<<endl;
            num=num/10;
            //cout<<" num: "<<num<<endl;
        }
        
        return true;
    }
};