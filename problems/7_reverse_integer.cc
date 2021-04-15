class Solution {
public:
    int reverse(int x) {
        bool is_neg = false;
        if(x<-2147483641) return 0;
        if(x>2147483641) return 0;
        
        if (x<0) {x*=-1; is_neg = true;}
        int rx = 0;
        while(x){
            if(rx >0){
                int rxx = 2147483647 / rx;
                if(rxx < 10) return 0;
            }
            
            rx = rx *10;
            rx += (x %10);
            x/=10;
        }
        if(is_neg) rx*=-1;
        
        //cout<<"rx: "<<rx<<endl;
        
        return rx;
    }
};