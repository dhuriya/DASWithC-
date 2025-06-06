#include<bits/stdc++.h>
using namespace std;
bool binarySearch(vector<int> &arr, int left,int right,int target){
    while(left<right){
        int mid = left + (right - left)/2;
        cout<<"this is mid: "<< mid <<endl;
        if(arr[mid]==target){
            return true;
        }else if(arr[mid]<target){
            left = mid+1;
            cout<<" else if : "<< left<<endl;
        }else{
            right = mid -1;
            cout<<"else : "<< right << endl;
        }
    }
    return false;
}
bool twoSum(vector<int> &arr, int target){
    sort(arr.begin(),arr.end());
    for(int i =0;i<arr.size();i++){
        int complement = target - arr[i];
        cout<<"Complement : "<<target<<arr[i]<< complement<<endl;
        if(binarySearch(arr, i+1,arr.size()-1,complement))
        return true;
    }
}
bool getTwosum(vector<int> &arr,int t){
    for(int i = 0;i<arr.size();i++){
        int c = t - arr[i];
        for(int j = i+1;j<arr.size();j++){
            if(arr[j]==c){
                return true;
            }
        }
    }
    return false;
}
int main(){
    vector<int> arr = {1, 4, 45, 6, 10, 8};
    int target = 100;
    if(getTwosum(arr,target)){
        cout<< "true";
    }else{
        cout<< "false";
    }
    // if(twoSum(arr,target)){
    //     cout<< "true";
    // }else{
    //     cout<< "false";
    // }
    return 0;
}