//left view

void left_view(TreeNode<int> *root,int level,vector<int>&ans){

    if(root==NULL) return;

    if(ans.size()==level)
    ans.push_back(root->data);

    if(root->left)
    left_view(root->left,level+1,ans);
    left_view(root->right,level+1,ans);

}

vector<int> getLeftView(TreeNode<int> *root)
{
    //    Write your code here
    vector<int>ans;
    left_view(root,0,ans);
    return ans;
}

// Right View

class Solution {
public:
    void recursion(TreeNode *root, int level, vector<int> &res)
    {
        if(root==NULL) return ;
        if(res.size()==level) res.push_back(root->val);
        recursion(root->right, level+1, res);
        recursion(root->left, level+1, res);
    }
    
    vector<int> rightSideView(TreeNode *root) {
        vector<int> res;
        recursion(root, 0, res);
        return res;
    }
};
