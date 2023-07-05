class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int pref_min=INT_MAX;
        int ans=INT_MIN;
        for(auto it:prices){
            pref_min=min(pref_min,it);
            ans=max(ans,it-pref_min);
        }
        return ans;

    }
};
