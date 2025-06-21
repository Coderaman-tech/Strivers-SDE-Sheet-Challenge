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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>>mp;
        queue<pair<TreeNode*,pair<int,int>>>q;
        q.push({root,{0,0}});
        vector<vector<int>>ans;
        while(!q.empty()){
            auto it=q.front();
            q.pop();
            TreeNode* node=it.first;
            int level=it.second.first;
            int vertical=it.second.second;
            mp[vertical][level].insert(node->val);
            if(node->left)
            q.push({node->left,{level+1,vertical-1}});
            if(node->right)
            q.push({node->right,{level+1,vertical+1}});
        }
        for(auto it:mp){
            vector<int>v;
            for(auto p:it.second){
                v.insert(v.end(),p.second.begin(),p.second.end());
            }
            ans.push_back(v);
        }
        return ans;
    }
};
