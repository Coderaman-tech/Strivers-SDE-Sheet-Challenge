// using two stack

#include <bits/stdc++.h> 
vector<int> getPostOrderTraversal(TreeNode *root)
{
    // Write your code here.
    stack<TreeNode*>s1;
    stack<TreeNode*>s2;
    vector<int>ans;

    if(root==NULL){
        return ans;
    }
    s1.push(root);

    while(!s1.empty()){
        TreeNode *curr=s1.top();
        s1.pop();
        s2.push(curr);
        if(curr->left)
        s1.push(curr->left);
        if(curr->right)
        s1.push(curr->right);

    }

    while(!s2.empty()){
        ans.push_back(s2.top()->data);
        s2.pop();
    }
    return ans;
}


// using one stack
class Solution {
public:

    vector<int> postorderTraversal(TreeNode* root) {
         stack<TreeNode*>st;
         vector<int>ans;
          if(root==NULL)
            return ans;
               
         while(!st.empty() || root!=NULL){
             if(root!=NULL){
                 st.push(root);
                 root=root->left;
             }
             else{
                 TreeNode* temp=st.top()->right;
                 if(temp==NULL){
                     temp=st.top();
                     st.pop();
                     ans.push_back(temp->val);
                     while(!st.empty() && temp==st.top()->right){
                         temp = st.top();
                         st.pop();
                        ans.push_back(temp ->val);
                     }
                 }
                 else
                 root=temp;
             }
         }
         
    return ans;
    }
};
