// By Stack
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        stack<TreeNode*>st;

        while(1){
            if(root!=NULL){
                st.push(root);
                root=root->left;
            }
            else{
                if(st.empty()) break;
                root=st.top();
                ans.push_back(root->val);
                st.pop();
                root=root->right;
            }
        }
        return ans;
      
    }
};

//By recursion

#include <bits/stdc++.h> 


void inorder(TreeNode *root,vector<int>&ans){

    if(root==NULL) return;

    inorder(root->left,ans);
    ans.push_back(root->data);
    inorder(root->right,ans);
}

vector<int> getInOrderTraversal(TreeNode *root)
{
    // Write your code here.
     vector<int>ans;
     inorder(root,ans);   
    return ans;
}
