#include<bits/stdc++.h>
using namespace std;
vector<int> findDistinct(vector<int> &arr){
    vector<int> res;
    int n = arr.size();
    sort(arr.begin(),arr.end());
    for (int i = 0; i < n; i++)
    {
        if(i==0 || arr[i] != arr[i-1])
        {
             //cout<<arr[i]<<" ";
            res.push_back(arr[i]);
        }
    }
    return res;
}
int main(){
     vector<int> arr = {2,2,3,3,7,5};
     vector<int> res = findDistinct(arr);
  	for(int ele: res) {
      	cout << ele << " ";
    }
    return 0;
}