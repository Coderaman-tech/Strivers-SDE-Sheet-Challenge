class Solution {
  public:
    vector<int> topKSumPairs(vector<int>& a, vector<int>& b, int k) {
        // code here
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        vector<int>ans;
        int n=a.size();
        priority_queue<pair<int,pair<int,int>>>pq;
        pq.push({a[n-1]+b[n-1],{n-1,n-1}});
        set<pair<int,int>>st;
        st.insert({n-1,n-1});
        while(k--){
            auto it=pq.top();
            pq.pop();
            int sum=it.first;
            int i=it.second.first;
            int j=it.second.second;
            ans.push_back(sum);
            if(st.find({i-1,j})==st.end()){
                pq.push({a[i-1]+b[j],{i-1,j}});
                st.insert({i-1,j});
            }
            if(st.find({i,j-1})==st.end()){
                pq.push({a[i]+b[j-1],{i,j-1}});
                st.insert({i,j-1});
            }
        }
        return ans;
        
    }
};
