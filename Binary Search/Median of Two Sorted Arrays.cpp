// 1. Better approach - Other than merge two array into one and find median of it 

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(),m=nums2.size();
        int ind1=(n+m)/2;
        int ind2=ind1-1;
        int indnum1=0,indnum2=0;
        int cnt=0;
        int i=0,j=0;
        while(i<n && j<m){
            if(nums1[i]<nums2[j]){
                if(cnt==ind1) indnum1=nums1[i];
                if(cnt==ind2) indnum2=nums1[i];
                cnt++;
                i++;
            }
            else{
                if(cnt==ind1) indnum1=nums2[j];
                if(cnt==ind2) indnum2=nums2[j];
                cnt++;
                j++;
            }
        }

        while(i<n){
            if(cnt==ind1) indnum1=nums1[i];
            if(cnt==ind2) indnum2=nums1[i];
            cnt++;
            i++;
        }
        while(j<m){
            if(cnt==ind1) indnum1=nums2[j];
            if(cnt==ind2) indnum2=nums2[j];
            cnt++;
            j++;
        }
        if((n+m)%2!=0) return (double)indnum1;
        return (double) (double)((indnum1+indnum2)/2.0);
    }
};

// Optimal Approach - Binary Search

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size(),n2=nums2.size();
        if(n1>n2) return findMedianSortedArrays(nums2,nums1);
        int left=(n1+n2+1)/2;
        int low=0,high=n1;
        int n=n1+n2;
        while(low<=high){
            int mid1=(low+high)/2;
            int mid2=left-mid1;
            int l1=INT_MIN,l2=INT_MIN;
            int r1=INT_MAX,r2=INT_MAX;
            if(mid1<n1)r1=nums1[mid1];
            if(mid2<n2)r2=nums2[mid2];
            if(mid1-1>=0) l1=nums1[mid1-1];
            if(mid2-1>=0) l2=nums2[mid2-1];
            if(l1<=r2 && l2<=r1){
                if(n%2==1) return double(max(l1,l2));
                return (double(max(l1,l2)+min(r1,r2)))/2.0;
            }
            else if(l1>r2)
            high=mid1-1;
            else
            low=mid1+1;
        }
       return 0;
    }
};
