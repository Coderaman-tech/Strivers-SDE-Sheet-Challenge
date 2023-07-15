#define ll long long

class Solution {
public:

void merge(ll s1,ll e1,ll s2,ll e2,ll n,vector<int>&nums,ll &count){

    vector<ll>temp(e2-s1+1);
    
     ll i1=s1,j1=s2;

    while(i1<=e1 && j1<=e2){
        if((ll)nums[i1]>(ll)2*nums[j1]){
        count+=(e1-i1+1);
        j1++;
        }
        else
        i1++;
    }

    ll i=s1,j=s2,k=0;
    while(i<=e1 && j<=e2){
        if(nums[i]<=nums[j]){
            temp[k++]=nums[i++];
        }

        else{
            temp[k++]=nums[j++];
        }
    }
   while(i<=e1){
       temp[k++]=nums[i++];
   }
   while(j<=e2){
       temp[k++]=nums[j++];
   }

    for(ll i=s1;i<=e2;i++){
        nums[i]=temp[i-s1];
    }
}

void merge_sort(ll s,ll e,ll n,vector<int>&nums,ll &count){
    if(s==e)
    return;
    ll mid=(s+e)/2;
    merge_sort(s,mid,n,nums,count);
    merge_sort(mid+1,e,n,nums,count);
    merge(s,mid,mid+1,e,n,nums,count);
}
    int reversePairs(vector<int>& nums) {
        ll n=nums.size();
       
        ll s=0,e=n-1;
        ll count=0;
        merge_sort(s,e,n,nums,count);
        return count;
    }
};
