/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/

class Solution {
  public:
    vector<int> bottomView(Node *root) {
        // Your Code Here
        vector<int>bottom;
        map<int,int>mp;
        queue<pair<Node*,int>>q;
        q.push({root,0});
        while(!q.empty()){
            Node* root =q.front().first;
            int level=q.front().second;
            q.pop();
            mp[level]=root->data;
            if(root->left)
            q.push({root->left,level-1});
            if(root->right)
            q.push({root->right,level+1});
        }
        for(auto it:mp)
        bottom.push_back(it.second);
        return bottom;
    }
};
