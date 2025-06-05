#include<bits/stdc++.h>
#include <algorithm>
using namespace std;
// using temporay array
void pushZerosToEnd(vector<int> &arr){
    int n = arr.size();
    vector<int> temp(n);
    int j=0;
    //copy non-zero
    for (int i = 0; i < n; i++)
    {
        if(arr[i]!=0){
            temp[j++] = arr[i];
        }
    }
    while (j<n)
    {
        temp[j++] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        arr[i]=temp[i];
    }
    
}
// Two Traversals
void TwoTraversalApproach(vector<int>& arr){
    //count of non-zero 
    int count = 0;
    for(int i=0;i<arr.size();i++){
        if(arr[i] !=0){
            arr[count++]=arr[i];
        }
    }
    // 
    while (count<arr.size())
    {
        arr[count++] = 0;
    }
    
}
// One Travesal
void OneTraversalApproach(vector<int>& arr){
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i]!=0){
            swap(arr[i],arr[count]);
            count++;
        }
    }
    
}
//Using Library Methods
void stable_parition_lib(vector<int>& arr){
    //stable_partition(arr.begin(),arr.end());
}
int main (){
    vector<int> arr = {1,2,0,4,3,0,5,0};
    //pushZerosToEnd(arr);
    //TwoTraversalApproach(arr);
    //OneTraversalApproach(arr);
    //stable_parition_lib(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<< " ";
    }
    
    return 0;
}