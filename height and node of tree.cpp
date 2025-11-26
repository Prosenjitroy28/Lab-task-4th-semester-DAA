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


 
int height(node* root){
    if(root==NULL)return -1;
    int l,h;
    l=height(root->left);
    h=height(root->right);
    return max(l,h)+1;
 }
 int non(node* root){
    if(root==NULL)return 0;
    int l,h;
    l=non(root->left);
    h=non(root->right);
    return (l+h)+1;
 }

 int main(){
  node* root=new node(1);
  root->left=new node(2);
  root->left->left=new node(4);
  root->left->right=new node(5);
  root->right=new node(3);
  root->right->right=new node(6);
  root->right->right->left=new node(7);
  cout<<"Height of tree:"<<height(root)<<endl;
  cout<<"Number of Node:"<<non(root);

    return 0;
 }