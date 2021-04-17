#include <string>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int ret = 0;
        int i = 0;
        bool is_neg = false;
        while(s[i] == ' ')
            i++;
        if(s[i] == '-'){
            is_neg = true;
            i++;
        }
        else if(s[i] == '+'){
            i++;
        }
        
        // if(is_neg) {
        //     cout << "-";
        // }else{
        //     cout<<"+";
        // }
        
        int num = 0;
        int x = i;
        int len = 0;
        while(s[x]=='0'){
            x++;
        }
        while(s[x]>='0' && s[x]<='9'){
            len++;x++;
        }
        if(len>10){
            if (is_neg) return -2147483648;
            else return 2147483647;
        }
        while(s[i]>='0' && s[i]<='9'){
            
            if(num >0 && (2147483647/num < 10)) {
                if (is_neg) return -2147483648;
                else return 2147483647;
            }
            if((2147483647 - num * 10) < (s[i]-'0')) {
                if(is_neg) return -2147483648;
                else return 2147483647;
            }
            num = num * 10 + (s[i]-'0');
            
            //cout<< num<<endl;
            i++;
                       
            
        }
        
        if(is_neg) num*=-1;
        return num;
        
    }
};