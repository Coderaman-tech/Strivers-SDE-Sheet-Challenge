#include <bits/stdc++.h> 


void merge(long long *arr,int s1,int e1,int s2,int e2,int n,long long &count){
    
    long long temp[n];
    int i=s1,j=s2,k=0;
    while(i<=e1 && j<=e2){
        if(arr[i]<=arr[j]){
            temp[k++]=arr[i++];
        }
        else{
            count+=(e1-i+1);
            temp[k++]=arr[j++];
        }
    }

    while(i<=e1){
        temp[k++]=arr[i++];
    }
    while(j<=e2){
        temp[k++]=arr[j++];
    }
    for(int i=s1;i<=e2;i++)
    arr[i]=temp[i-s1];
}

void merge_sort(long long *arr,int s,int e,int n,long long &count){
    
    if(s==e)
    return;
    
    int mid=(s+e)/2;
    merge_sort(arr,s,mid,n,count);
    merge_sort(arr,mid+1,e,n,count);
    merge(arr,s,mid,mid+1,e,n,count);
}

long long getInversions(long long *arr, int n){
    // Write your code here.
    long long count=0;
    int s=0,e=n-1;
    merge_sort(arr,s,e,n,count);
    return count;
    
}
