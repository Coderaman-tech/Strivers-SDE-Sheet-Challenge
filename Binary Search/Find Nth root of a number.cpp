class Solution {
public:

  int isNRoot(int mid,int n,int m){
    long long ans=1;
    for(int i=1;i<=n;i++){
      ans*=mid;
      if(ans>m) return 2;
    }
    if(ans==m) return 1;
    return 0;
  }
  int NthRoot(int n, int m) {
       int s=0,e=m;
       while(s<=e){
        int mid=(s+e)/2;
        int midN=isNRoot(mid,n,m);
        if(midN==1)
        return mid;
        else if(midN==2)
        e=mid-1;
        else
        s=mid+1;
       }
       return -1;
    }
};
