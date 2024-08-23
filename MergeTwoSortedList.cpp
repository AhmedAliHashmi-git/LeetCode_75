#include<iostream>
using namespace  std;
struct ListNode{
  int val;
  ListNode* next;
  ListNode():val(0),next(nullptr){}  
  ListNode(int val):val(val),next(nullptr){}  
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* list3 = new ListNode();
        ListNode* temp = list3;
        list3->next = nullptr;
        while(list1 != nullptr  && list2 != nullptr){
            if(list1->val <= list2->val){
                temp->next = list1;
                list1 = list1->next;
            }
            else{
                temp->next = list2;
                list2 = list2->next;
            }
            temp = temp->next;
        }
        if(list1 != nullptr) {
            temp->next = list1;
        } else {
            temp->next = list2;
        }

        ListNode* curr = list3->next;

        


       return curr;
        
    }
};


int main(){
    ListNode* list1 = new ListNode(1);
     list1->next = new ListNode(2);
     list1->next->next = new ListNode(4);
    ListNode* list2 = new ListNode(1);
     list2->next = new ListNode(3);
     list2->next->next = new ListNode(4);
    Solution sol;
    sol.mergeTwoLists(list1 , list2);
     return 0;
}