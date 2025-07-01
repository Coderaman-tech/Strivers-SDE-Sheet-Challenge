class Solution {
  public:
    // Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int k) {
        // code here
        priority_queue<int,vector<int>,greater<int>>pq;
        for(auto it:arr){
            vector<int>v=it;
            for(auto t:v)
            pq.push(t);
        }
        
        vector<int>ans;
        while(!pq.empty()){
            ans.push_back(pq.top());
            pq.pop();
        }
        return ans;
    }
};
