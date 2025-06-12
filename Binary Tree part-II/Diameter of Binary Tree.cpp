# Brute force approach

class Solution {
public:
    int height(TreeNode* root){
        if(root==NULL) return 0;
        return max(height(root->left),height(root->right))+1;
    }
    
     int diameter(TreeNode* root) {
        if(root==NULL) return 0;
        int lh=height(root->left);
        int rh=height(root->right);

        int currDiameter=lh+rh+1;
        int ld=diameter(root->left);
        int rd=diameter(root->right);
        return max(currDiameter,max(ld,rd));
    }
TC- 0(n*n)
  
# Optimal Approach

  /**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
     int height(TreeNode* root,int &d) {
        if(root==NULL) return 0;
        int lh=height(root->left,d);
        int rh=height(root->right,d);

        d=max(d,lh+rh+1);
        return max(lh,rh)+1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 0;
        int d=0;
        height(root,d);
        return d-1;
    }
};

TC- 0(n)

