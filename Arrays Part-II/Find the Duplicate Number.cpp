class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int s=nums[0],f=nums[0];

        do{
            s=nums[s];
            f=nums[nums[f]];
        }while(s!=f);

        f=nums[0];
        while(s!=f){
            s=nums[s];
            f=nums[f];
        }
        return s;
    }
};
