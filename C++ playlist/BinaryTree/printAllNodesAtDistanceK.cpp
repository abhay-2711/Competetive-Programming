#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

void printSubTreesNodes(Node* root,int k){
    if(root==NULL || k<0){
        return;
    }
    if(k==0){
        cout<<root->data<<" ";
    return;
    }
    printSubTreesNodes(root->left,k-1);
    printSubTreesNodes(root->right,k-1);  
}

int printNodesAtK(Node* root,Node* target,int k){
    if(root==NULL){
        return -1;
    }
    if(root==target){
        printSubTreesNodes(root,k);
        return 0;
    }
    int dl=printNodesAtK(root->left,target,k);
    if(dl!=-1){
        if(dl+1 == k){
            cout<<root->data<<" ";
        }
        else{
            printSubTreesNodes(root->right,k-dl-2);
        }
        return 1+dl;
    } 

    int dr=printNodesAtK(root->right,target,k);
    if(dr!=-1){
        if(dr+1 == k){
            cout<<root->data<<" ";
        }
        else{
            printSubTreesNodes(root->left,k-dr-2);
        }
        return 1+dr;
    } 
    return -1;
}


int main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    
//test
    printNodesAtK(root,root->left,1);
}