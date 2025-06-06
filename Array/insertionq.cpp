#include<bits/stdc++.h>
using namespace std;
vector<int> getInsertion(vector<int> &arr, vector<int> &arr2){
    vector<int> ans;
    for(int i=0;i<arr.size();i++){
        int element =  arr[i];
        for(int j=0; j<arr2.size();j++){
            if(element == arr2[j]){
                ans.push_back(element);
                arr2[j] = -1;
                break;
            }
        }
    }
     for(int i = 0;i<ans.size();i++){
        cout<< ans[i] << " ";
    }
}
int main(){
    vector<int> arr = {1,2,2,2,3,4};
    vector<int> arr2 = {2,2,3,3};
    vector<int> ans = getInsertion(arr,arr2);
    for(int i = 0;i<ans.size();i++){
        cout<< ans[i] << " ";
    }
    return 0;
}