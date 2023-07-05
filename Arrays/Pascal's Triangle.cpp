class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        vector<int>v;
        v.push_back(1);
        ans.push_back(v);
        if(numRows==1)
        return ans;
        v.push_back(1);
        ans.push_back(v);
        if(numRows==2)
        return ans;

        for(int i=2;i<numRows;i++){
            v=ans[i-1];
            vector<int>v1;
            v1.push_back(1);
            for(int j=1;j<v.size();j++){
                v1.push_back(v[j-1]+v[j]);
            }
            v1.push_back(1);
            ans.push_back(v1);
        }
        return ans;
    }
};
