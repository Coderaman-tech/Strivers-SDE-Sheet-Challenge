#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	int cand,count=0;

	for(int i=0;i<n;i++){
		if(count==0){
			cand=arr[i];
		}
		if(cand==arr[i])
		count++;
		else
		count--;
	}

  //check it is valid or not

   count=0;
   for(int i=0;i<n;i++){
	   if(arr[i]==cand)
	   count++;
   }

   if(count>(n/2)) return cand;
   return -1;
}
