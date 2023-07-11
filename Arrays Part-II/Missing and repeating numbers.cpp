#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	
	int xr=0;
	for(int i=0;i<n;i++){
		xr^=arr[i];
		xr^=(i+1);
	}
	
	int pos=(xr& ~(xr-1));
	
	int zero=0,one=0;
	
	for(int i=0;i<n;i++){
		 if ((arr[i] & pos) != 0) {
            one = one ^ arr[i];
        }
        else {
            zero = zero ^ arr[i];
        }
		 if( (i+1 & pos) != 0) {
            one = one ^ (i+1);
        }
       
        else {
            zero = zero ^(i+1);
        }
	}
	int cnt=0;
	for(int i=0;i<n;i++){
		if(arr[i]==zero)
		cnt++;
	}
	if(cnt==2) return {one,zero};
	return {zero,one};
}
