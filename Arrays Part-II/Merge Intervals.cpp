class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
    
    int n=arr.size();
    sort(arr.begin(),arr.end());
    vector<vector<int>>ans;
    vector<int>ds;
    int s=arr[0][0];
    int e=arr[0][1];
    ds.push_back(s);
    
    for(int i=1;i<n;i++){
        if(e>=arr[i][0]){
            e=max(e,arr[i][1]);
        }
        else{
            ds.push_back(e);
            ans.push_back(ds);
            ds.clear();
            s=arr[i][0];
            ds.push_back(s);
            e=arr[i][1];
        }
    }
    ds.push_back(e);
    ans.push_back(ds);
    return ans;
    }
};
