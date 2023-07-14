class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int c1=0,c2=0,e1=INT_MIN,e2=INT_MIN;

        for(int i=0;i<n;i++){
            if(c1==0 && e2!=nums[i]){
                e1=nums[i];
                c1++;
            }
            else if(c2==0 && e1!=nums[i]){
                e2=nums[i];
                c2++;
            }
            else if(e1==nums[i]) c1++;
            else if(e2==nums[i]) c2++;
            else{
                c1--;
                c2--;
            }
        }
        int ch1=0,ch2=0;
        for(int i=0;i<n;i++){
            if(e1==nums[i]) ch1++;
            else if(e2==nums[i]) ch2++;
        }
       
        vector<int>ans;
        int mini=(int)n/3+1;
        if(ch1>=mini)
        ans.push_back(e1);
         if(ch2>=mini)
        ans.push_back(e2);
        return ans;
    }
};
