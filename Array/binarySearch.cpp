#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int low,int high,int x){
    while (low<=high)
    {
        int mid = low+(high-low)/2;
        if(arr[mid]==x){
            return mid;
        }
        if(arr[mid]<x){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    return -1;
}
// recursive binary search
int recursiveBinarySearch(int arr[], int low,int high,int x){
    if(high>=low){
        int mid = low+(high - low)/2;
        if(arr[mid] == x){
            return mid;
        }
        if(arr[mid]>x){
            return recursiveBinarySearch(arr,low,mid-1,x);
        }
        return recursiveBinarySearch(arr, mid+1,high,x);
    }
}
int main(){
    int arr[] = {2,3,4, 10,40};
    int x = 40;
    int n = sizeof(arr)/sizeof(arr[0]);
    //int result = binarySearch(arr, 0 , n-1,x);
    int result = recursiveBinarySearch(arr, 0 , n-1,x);
    if(result ==-1){
        cout<<"Element is not present in array";
    }else{
        cout<<"Element is present at index "<<result;
    }
    return 0;
}