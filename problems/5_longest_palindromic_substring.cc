#include <string>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        int len = s.length();
        int p,l;
        int max = 0;
        bool d = false;
        string ret = "";
        if(len == 1) return s;
        if(len == 2){
            if(s[0]==s[1]) return s;
            else{
                ret += s[0];
                return ret;
            }
        }
        if(len==3){
            if(s[0]==s[2]) return s;
            if(s[0]==s[1]){
                ret+=s[0];
                ret+=s[1];
                return ret;
            }
            if(s[2]==s[1]){
                ret+=s[2];
                ret+=s[1];
                return ret;
            }
        }
        
        for(int i=1;i<=len-1;i++){
            
            //cout<<"i: "<<i<<endl;
            //Odd pivot
            int j=1;
            while(i-j >=0 && i+j <len && s[i+j] == s[i-j]){
                j++;
            }
            //cout<<"j: "<<j<<endl;
            if(max < (2*j + 1)){
                p=i; l=j-1; d = false; max = 2*j+1;
            }
            
            //Even pivot
            if(s[i]==s[i+1]){
                int j=1;
                while(i-j >=0 && i+j <len && s[i+1+j] == s[i-j]){
                    j++;
                }
                //cout<<"j2: "<<j<<endl;
                if(max < (2*j + 2)){
                p=i; l=j-1; d = true; max = 2*j+2;
                }   
            }
            
            //cout<< "p: "<<p<<" l: "<<l<<endl;         
            
        }
        
        if(!d){
                for(int i= p - l; i<=p+l; i++){
                ret += s[i];
                }
                return ret;
            }else{
                for(int i= p - l; i<=p+l+1; i++){
                ret += s[i];
                }
                return ret;
            }
    
        return ret;
    }
};