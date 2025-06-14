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
    // Function to return a list of nodes visible from the top view
    // from left to right in Binary Tree.
    
    vector<int> topView(Node *root) {
        // code here
        vector<int>top;
        map<int,int>mp;
        queue<pair<Node*,int>>q;
        q.push({root,0});
        while(!q.empty()){
            Node* root =q.front().first;
            int level=q.front().second;
            q.pop();
            if(mp.find(level)==mp.end())
            mp[level]=root->data;
            if(root->left)
            q.push({root->left,level-1});
            if(root->right)
            q.push({root->right,level+1});
        }
        for(auto it:mp)
        top.push_back(it.second);
        return top;
        
    }
};
