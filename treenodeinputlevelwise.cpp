#include<iostream>
#include<queue>
#include "treenode.h"
using namespace std;

Treenode<int>* Takeinputlevelwise(Treenode<int>* Root){
    int rootData;
    cout<<"Enter root data";
    cin>>rootData;
    Treenode<int>*Root=new Treenode(rootData);

    queue<Treenode<int>*> pendingNodes;

    pendingNodes.push(Root);

    while(pendingNodes.size()!=0){
        Treenode<int>*front= pendingNodes.front();
        pendingNodes.pop();
        cout<<"Enter no of children of "<<front->data<<" ";
        int numChild;
        cin>>numChild;

        for(int i=0;i<numChild;i++){
            int childData;
            cout<<"Enter "<<i<<"th child of "<<front->data;
            cin>>childData;
            Treenode<int>*child=new Treenode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return Root;
}

int main(){
    
    return 0;
}