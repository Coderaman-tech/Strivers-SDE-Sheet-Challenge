#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
   int n=arr.size();
   unordered_map<int,int>mp;
   vector<vector<int>>ans;
 
   for(int i=0;i<n;i++){
      int k=s-arr[i];
      if(mp.find(k)!=mp.end()){

         int t=mp[k];
         while(t--){
         if(k<arr[i])
         ans.push_back({k,arr[i]});
         else
         ans.push_back({arr[i],k});
         }

      }
     
         mp[arr[i]]++;
      
   }
   sort(ans.begin(),ans.end());
   return ans;
}
