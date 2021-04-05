#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isIdealPermutation(vector<int>& A) {
        int N = A.size();
        if(N<3) return true;
        
        bool adj_swap = false;
        for(int i=0;i<N-1;i+=1){
            if(A[i] > A[i+1] && adj_swap == false){
                int t = A[i];
                A[i] = A[i+1];
                A[i+1] = t;
                adj_swap = true;
            }else{
                adj_swap = false;
            }
        }
        
        for(int i=0;i<N-1;i++){
            if(A[i] > A[i+1]) return false;
        }
        
        return true;
    }
};