//By stack

#include <bits/stdc++.h> 

vector<int> getPreOrderTraversal(TreeNode *root)
{
    // Write your code here.
    vector<int>ans;
    stack<TreeNode*>st;
    if(root==NULL) return ans;
    st.push(root);

    while(!st.empty()){
        root=st.top();
        ans.push_back(root->data);
        st.pop();

        if(root->right)
        st.push(root->right);
        if(root->left)
        st.push(root->left);
    }
    return ans;
}

//By Recursion

class Solution {
public:
vector<int>ans;
    vector<int> preorderTraversal(TreeNode* root) {
        if(root==NULL)
        return ans;
        ans.push_back(root->val);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
        return ans;
    }
};
