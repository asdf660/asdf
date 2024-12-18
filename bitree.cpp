#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *left;
    Node *right;

    Node(int value){
        data=value;
        left=NULL;
        right=NULL;
    }
};
Node*insert(Node*root,int val){
    if(root==NULL){
        return new Node(val);
    }


   else if(val<root->data){
        root->left=insert(root->left,val);
    }
    else{
        root->right=insert(root->right,val);
    }
    return root;
}
Node*search(Node*root,int key){


    if(root->data==key){
        return root;
    }
    else if(key<root->data){
        return search(root->left ,key);

    }
    else{
        return search(root->right,key);
    }

}

void inorder(Node*root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" "; 
    inorder(root->right);
}
int main(){
    Node *root= NULL;
    root=insert(root,5);
    insert(root,8);
    insert(root,6);

    insert(root,9);
    insert(root,3);
    inorder(root);

search(root,3);
if(search(root,9)==NULL){
    cout<<"Doesnot exist "<<endl;
}
else{
    cout<<"exist";      
}

}