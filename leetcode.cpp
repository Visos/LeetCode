#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };


// da finire e ripassare pointer
class Solution {

    public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* result = new ListNode();
        ListNode* start = result;
        int sum = 0;
        ListNode* node;
        while(head != nullptr){
            if(head->val != 0){
                sum +=head->val;
            }else{
                result->val = sum;
                node = new ListNode();
                result->next = node;
            }
        }


        return nullptr;
    }



    // trovare punti critici e restituire la distanza minima e massima tra due punti critici. se non esistono restituire [-1,-1]
    
    public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
    ListNode *current = head->next;
    int prev = head->val;
    vector<int> crit;
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
    for(i =0; i<crit.size(); i++){
        cout<<"crit: "<<crit[i]<<endl;
    }

    if(crit.size()>1){
        cout<<"ciao";
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
    cout<<"vector min: "<<v[0]<<" max: "<<v[1];

    return v;
    }
};



int main() {
/*
    // Creazione di 5 nodi con valori interi
    ListNode* nodo1 = new ListNode(1);
    ListNode* nodo2 = new ListNode(3);
    ListNode* nodo3 = new ListNode(2);
    ListNode* nodo4 = new ListNode(2);
    ListNode* nodo5 = new ListNode(3);
    ListNode* nodo6 = new ListNode(2);
    ListNode* nodo7 = new ListNode(2);
    ListNode* nodo8 = new ListNode(2);
    ListNode* nodo9 = new ListNode(7);

    // Collegamento dei nodi tra loro
    nodo1->next = nodo2;
    nodo2->next = nodo3;
    nodo3->next = nodo4;
    nodo4->next = nodo5;
    nodo5->next = nodo6;
    nodo6->next = nodo7;
    nodo7->next = nodo8;
    nodo8->next = nodo9;
    ListNode* head = nodo1;
*/

    string s = "cdbcbbaaabab";
    int x = 4; //poinys for ba
    int y = 5;  //pionts for ab
    int points = 0;

    int pos = s.find("ba");
    if(pos>=0){
        s.erase
    }


    return 0;
}





