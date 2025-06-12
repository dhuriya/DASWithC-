#include<bits/stdc++.h>
using namespace std;
int peakElement(vector<int> &arr){
    int n = arr.size();
    if(n == 1) // only element
    return 0;
    // first element is peak
    if(arr[0]>arr[1])
     return 0;
     // last element is peak
     if(arr[n-1] > arr[n-2])
     return n-1;
     int lo = 1, hi = n-2;
     while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid] > arr[mid -1] && arr[mid] > arr[mid + 1])
            return mid;
        if(arr[mid]<arr[mid + 1])
        {
            lo = mid +1;
        }else{
            hi = mid -1;
        }
     }
     return 0;
}
int main(){
     vector<int> arr = {3,4,5,1};
     cout<<"Peak Element : "<< peakElement(arr);
    return 0;
}
