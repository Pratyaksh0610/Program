#include<iostream>
#include<queue>
#include<math.h>
#include<algorithm>
using namespace std;
template<typename T>
class binaryTreeNode{
    public:
    T data;
    binaryTreeNode* left;
    binaryTreeNode* right;

    binaryTreeNode(T data){
        this->data=data;
        left=NULL;
        right=NULL;
    }

    ~binaryTreeNode(){
        delete left;
        delete right;
    }
};

class BST{
    binaryTreeNode<int>* root;
    private:
    bool hasData(binaryTreeNode<int>* root, int data){
        if(root==NULL){
            return 0;
        }
        if(root->data==data){
            return true;
        }
        else if(data<root->data){
            return hasData(root->left,data);
        }
        else{
            return hasData(root->right,data);
        }
    }
    binaryTreeNode<int>* insert(binaryTreeNode<int>* root,int data){
        if(root==NULL){
            root->data=data;
        }
        if(data<root->data){
            if(root->left!=NULL){
                binaryTreeNode<int>* left= insert(root->left,data);
                root->left=left;
                return root;
            }
            else{
                binaryTreeNode<int>* leftRoot=new binaryTreeNode<int>(data);
                root->left=leftRoot;
            }
        }
        if(data>root->data){
            if(root->right!=NULL){
                binaryTreeNode<int>* right= insert(root->right,data);
                root->right=right;
                return root;
            }
            else{
                binaryTreeNode<int>* rightRoot=new binaryTreeNode<int>(data);
                root->right=rightRoot;
            }
        }
    }

    binaryTreeNode<int>* deletee(binaryTreeNode<int>* root, int data){
        if(root==NULL){
            return NULL;
        }
        if(data<root->data){
            deletee(root->left,data);
        }
        else if(data>root->data){
            deletee(root->right,data);
        }
        else{
            if(root->left==NULL  &&  root->right==NULL){
                delete(root);
                return NULL;
            }
            else if(root->left!=NULL  &&  root->right==NULL){
                binaryTreeNode<int>* temp=root->left;
                root->left=NULL;
                delete root;
                return temp;
            }
            else if(root->left==NULL  &&  root->right!=NULL){
                binaryTreeNode<int>* temp=root->right;
                root->right=NULL;
                delete root;
                return temp;
            }
            else{
                binaryTreeNode<int>* minNode=root->right;
                while(root!=NULL){
                    minNode=minNode->left;
                }
                binaryTreeNode<int>* temp=new binaryTreeNode<int>(minNode->data);
                root->right=deletee(root->right,minNode->data);
                temp->right=root->right;
                root->right=NULL;
                delete root;
                return temp;
            }
        }
    }
    void printInputLevelWise(binaryTreeNode<int>* root){
        	// Write your code here
    queue<binaryTreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size()!=0){
        binaryTreeNode<int>*front=pendingNodes.front();
        cout<<front->data<<":";
        pendingNodes.pop();
        
        if(front->left!=NULL){
            cout<<"L:"<<front->left->data<<",";
            pendingNodes.push(front->left);
        }
        else{
            cout<<"L:-1,";
        }
        if(front->right!=NULL){
            cout<<"R:"<<front->right->data<<endl;
            pendingNodes.push(front->right);
        }
        else{
            cout<<"R:-1"<<endl;
        }    
    }
    }

    public:
    BST(){
        root=NULL;
    }
    ~BST(){
        delete root;
    }
    bool hasData(int data){
        return hasData(root,data);
    }
    void insertData(int data){
        root=insert(root,data);
    }
    void deleteData(int data){
        root=deletee(root,data);
    }
    void printLevelWise() {
        printInputLevelWise(root);
}
};

class node{
    public:
    int data;
    node* next;

    node(int data){   
        this->data=data;
        this->next=NULL;
    }
    node(){
        this->next=NULL;
    }
};

binaryTreeNode<int>* takeInputLevelWise(){
    cout<<"Enter data: ";
    int data;
    cin>>data;
    binaryTreeNode<int>* root=new binaryTreeNode<int>(data);
    queue<binaryTreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size()!=0){
        binaryTreeNode<int>* front=pendingNodes.front();
        pendingNodes.pop();
        cout<<"Enter data of left node of "<<front->data<<": ";
        int leftdata;
        cin>>leftdata;
        binaryTreeNode<int>* leftnod=NULL;
        if(leftdata!=-1){
            leftnod=new binaryTreeNode<int>(leftdata);
            pendingNodes.push(leftnod);
        }
        front->left=leftnod;

        cout<<"Enter data of right node of "<<front->data<<": ";
        int rightdata;
        cin>>rightdata;
        binaryTreeNode<int>* rightnod=NULL;
        if(rightdata!=-1){
            rightnod=new binaryTreeNode<int>(rightdata);
            pendingNodes.push(rightnod);
        }
        front->right=rightnod;
        
    }   
    return root;  
}

bool search(binaryTreeNode<int>* root,int x){
    if(root==NULL){
        return false;
    }
    if(root->data==x){
        return true;
    }
    if(x>root->data){
        return search(root->right,x);
    }
    if(x<root->data){
        return search(root->left,x);
    }
}

int maxi(binaryTreeNode<int>* root){
    // if(root==NULL){
    //     return INT16_MIN;
    // }
    // int left=maxi(root->left);
    // int right=maxi(root->right);
    // return max(root->data, left, right);
}
     
int mini(binaryTreeNode<int>* root){
    //empty set ka smallest number is positive infinity 
    // if(root==NULL){  
    //     return INT16_MAX;
    // }
    // return min(root->data, mini(root->left), mini(root->right));     
}  

bool checkBST(binaryTreeNode<int>* root){
    if(root==NULL){
        return true;   
    }

    bool check=true;

    bool left=checkBST(root->left);
    bool right= checkBST(root->right);
    if(left==false || right==false || root->data<=maxi(root->left)  ||  root->data>=mini(root->right)){
        check=false;
    }
    return check;

}

class isBSTClass{
    public:
    bool isBST;
    int maxi;
    int mini;
};

isBSTClass checkBST2(binaryTreeNode<int>* root){
    isBSTClass outputt;
    if(root==NULL){
        outputt.isBST=true;
        outputt.maxi=INT16_MIN;
        outputt.mini=INT16_MAX;
        return outputt;
    }
    isBSTClass check;
    isBSTClass left=checkBST2(root->left);
    isBSTClass right= checkBST2(root->right);

    outputt.maxi=max(root->data, max(left.maxi,right.maxi));
    outputt.mini=min(root->data, min(left.mini,right.mini));
    
    if(left.isBST==false || right.isBST==false || root->data<=outputt.maxi  ||  root->data>=outputt.mini){
        outputt.isBST  =false;
    }
    return outputt;
}



pair<node*,node*> BSTtoLL(binaryTreeNode<int>* root){
    if(root==NULL){
        pair<node*,node*> ans;
        ans.first=NULL;
        ans.second=NULL;
        return ans;
    }
    node* mid=new node(root->data);
    mid->next=NULL;
    node*fhead=NULL;

    pair<node*,node*> l;
    pair<node*,node*> r;
    l=BSTtoLL(root->left);
    if(l.first!=NULL){
        fhead=l.first;
    }
    if(l.second!=NULL){
        l.second->next=mid;
    }
    if(l.second==NULL){
        l.first->next=mid;
        l.second=mid;
    }
    if(fhead==NULL){
        fhead=mid;
    }
    r=BSTtoLL(root->right);

    mid->next=r.first;

    pair<node*, node*> ans;
    if(r.second!=NULL){
        r.second->next=NULL;
    }
    ans.first=fhead;
    ans.second=r.second;
    return ans;
}

void printLinkList(node* head){
    node* ptr=head;
    while(ptr != NULL){
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
    cout<<"ahf";
}


int main(){
    binaryTreeNode<int>* root=takeInputLevelWise();
    pair<node*,node*> list=BSTtoLL(root);
    cout<<list.first->data;
    printLinkList(list.first);
    //printLinkList(node1);
}