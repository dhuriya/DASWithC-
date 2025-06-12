#include<bits/stdc++.h>
using namespace std;
int firstOcc(vector<int> &arr, int x){
    int n = arr.size();
    int s =0,e=n-1,ans = -1;
    while (s<=e)
    {
        int mid = s+(e-s)/2;
        if(arr[mid]==x){
            ans = mid;
            e = mid-1;
        }else if(x>arr[mid]){
            s =mid+1;
        }else if(x<arr[mid]){
            e = mid-1;
        }
    }
    return ans;
    
}
int lastOcc(vector<int> &arr, int x){
    int n = arr.size();
    int s =0,e=n-1,ans = -1;
    while (s<=e)
    {
        int mid = s+(e-s)/2;
        if(arr[mid]==x){
            ans = mid;
            s = mid+1;
        }else if(x>arr[mid]){
            s =mid+1;
        }else if(x<arr[mid]){
            e = mid-1;
        }
    }
    return ans;
    
}

int main(){
    vector<int> arr = {1, 2, 2, 2, 2, 3, 4, 7, 8, 8};
    int target = 2;
    cout<<"fist Occ in index : "<<firstOcc(arr,target)<<endl;
    cout<<"last Occ in index : "<<lastOcc(arr,target)<<endl;
    cout<<"Total Number of Occ : "<< (lastOcc(arr,target ) - firstOcc(arr,target)) +1;
    return 0;
}