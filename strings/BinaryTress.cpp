#include<bits/std.c++.h>

struct Treenode {
     int val;
     Treenode* left;
    Treenode* right;
    Treenode(int x) : val(x) ,left(nullptr) , right(nullptr);
};

vector<int> getInorder(Treenode* root){
    vector<int> inorder;
    Treenode* root =curr;
   while(){
    if (curr->left == NULL){        // check if the left node is null or not . if null then get the value .if not go to right
        inorder.push_back(curr->val);
        curr = curr->right;
    }
    else {
        Treenode* prev = curr->left;
        while(prev->right && prev->right != curr){
            prev = prev->right;
        }
    }
    if( prev->right == NULL){
        prev->right = curr ;
        curr = curr->left;
    }
    else{
       prev->right = NULL;
       inorder.push_back(curr->val);
       curr = curr->right;
        }
   }
   return inorder;
} 
// //if( prev->right == NULL){
//         prev->right = curr ;
// inorder.push_back(curr->val);    //just for preoder
//         curr = curr->left;
//     }