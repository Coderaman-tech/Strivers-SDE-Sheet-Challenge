class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n=nums.size();
        priority_queue<int>pq;
        for(int i=0;i<n;i++)
        pq.push(nums[i]);
        k-=1;
        while(k--)
        pq.pop();
        return pq.top();
    }
};
