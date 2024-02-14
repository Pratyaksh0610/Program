#include<bits/stdc++.h>
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
    ListNode* oddEvenList(ListNode* head) {

        if(head==NULL){
            return NULL;
        }

        int count=1;
        
        ListNode*temp=head;

        ListNode*odd=NULL;
        ListNode*otail=NULL;

        ListNode*even=NULL;
        ListNode*etail=NULL;

        while(temp!=NULL){
            if(count%2!=0){
                if(odd==NULL){
                    odd=temp;
                    otail=temp;
                }
                else{
                    otail->next=temp;
                    otail=otail->next;
                }
            }
            else if(count%2==0){
                if(even==NULL){
                    even=temp;
                    etail=temp;
                }
                else{
                    etail->next=temp;
                    etail=etail->next;
                }
            }

            count++;
            temp=temp->next;

        }
        if(!even){
            etail->next=NULL;
        }
        otail->next=even;
        return odd;
    }
};

int main(){
    
    return 0;
}
