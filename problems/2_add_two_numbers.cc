/**
 * Definition for singly-linked list.
 */
#include <bits/stdc++.h>
using namespace std;

struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode *ret = new ListNode(-1);
        ListNode *t = ret;
        
        int carry = 0;
        int sum = 0;
        
        while(l1 != NULL || l2 != NULL){
            sum = carry;
            if(l1) sum += l1->val;
            if(l2) sum += l2->val;
            carry = sum / 10;
            sum = sum%10;
            
            if(t->val == -1){
                t->val = sum;
            }
            else{
                t->next = new ListNode(sum);
                t = t->next;
            }
            if(l1) l1 = l1->next;
            if(l2) l2 = l2->next;
        }
        if(carry != 0 ){
            t->next = new ListNode(carry);
        }
        
        return ret;
    }
};