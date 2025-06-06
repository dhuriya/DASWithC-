#include<bits/stdc++.h>
using namespace std;
vector<int> findDuplicates(vector<int> &arr){
    int n = arr.size();
    vector<int> freqArr(n);
    vector<int> result;
    for (int i = 0; i < n; i++){
        freqArr[arr[i]]++;
    }
    for (int i = 0; i < n; i++){
        if(freqArr[i]>1){
            result.push_back(i);
        }
    }
    if(result.empty()){
        result.push_back(-1);
    }
    return result;
}
int main(){
    vector<int> arr = {1,6,5,2,3,3,2};
    vector<int> duplicates = findDuplicates(arr);
    for (int i = 0; i < duplicates.size(); i++){
        cout<<duplicates[i]<< " ";
    }
    
    return 0;
}