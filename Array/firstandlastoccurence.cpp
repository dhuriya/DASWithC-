#include<bits/stdc++.h>
using namespace std;
int firtOcc(int arr[], int n, int key){
    int s =0 ,e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            e = mid - 1;
        }else if(key > arr[mid]){
            s = mid+1;
        }else if (key< arr[mid]){
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int lastOcc(int arr[], int n, int key){
    int s =0 ,e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            s = mid + 1;
        }else if(key > arr[mid]){
            s = mid+1;
        }else if (key< arr[mid]){
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int main(){
    int even[9] = {1, 3, 5, 5, 5, 5, 7, 123, 125};
    cout<<"fist Occ in index : "<<firtOcc(even,9,5)<<endl;
    cout<<"last Occ in index : "<<lastOcc(even,9,5);
    return 0;
}