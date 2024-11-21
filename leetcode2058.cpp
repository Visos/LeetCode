/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
    ListNode *current = head->next;
    vector<int> crit;
    int prev = head->val;
    int i = 1;
    int min = -1;
    int max = -1;

    while(current->next != NULL){

        if(current->val > current->next->val && current->val>prev)
            crit.push_back(i);
                
        if(current->val < current->next->val && current->val< prev)
            crit.push_back(i);
       
        prev = current->val;
        current = current->next;
        i++;
    }


    if(crit.size()>1){
        max = crit[crit.size()-1] - crit[0];
        min = max;
        for(i =0; i<crit.size()-1; i++){
            if(min>crit[i+1]-crit[i])
                min = crit[i+1]-crit[i];
        }

    }
    vector <int> v;
    v.push_back(min);
    v.push_back(max);
    return v;
    }
};