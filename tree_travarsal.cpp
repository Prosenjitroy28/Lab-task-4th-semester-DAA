#include <bits/stdc++.h>
using namespace std;


struct node{
int  data;
node* left;
node* right;
node(int d){
    data=d;
    left=right=NULL;
}
};

void pre_order(node* root){
    if(root==NULL)return;
  cout<<root->data;
  pre_order(root->left);
  pre_order(root->right);
}
void post_order(node* root){
    if(root==NULL)return;
 
  post_order(root->left);
  post_order(root->right);
   cout<<root->data;
}
void in_order(node* root){
    if(root==NULL)return;
 
  in_order(root->left);
  cout<<root->data;
  in_order(root->right);
   
}
 int main(){
  node* root=new node(1);
  root->left=new node(2);
  root->left->left=new node(4);
  root->left->right=new node(5);
  root->right=new node(3);
  root->right->right=new node(6);
  root->right->right->left=new node(7);
  pre_order(root);
  cout<<endl;
  post_order(root);
  cout<<endl;
  in_order(root);

    return 0;
 }