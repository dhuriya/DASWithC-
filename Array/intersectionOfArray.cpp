#include<bits/stdc++.h>
using namespace std;
vector<int> findArrayIntersectiion(vector<int> &arr1, int n, vector<int> &arr2, int m){
    int i =0,j=0;
    vector<int> ans;
    while (i<n&&j<m){
        if(arr1[i] == arr2[j]){
            ans.push_back(arr1[i]);
             i++;
            j++;
        }else if(arr1[i]<arr2[j]){
           i++;
        }else{
            j++;
        }
    }
    return ans;
}
vector<int> intersection(vector<int>& a, vector<int>& b) {
    vector<int> res;
    for (int i = 0; i < a.size(); i++) {    
        for (int j = 0; j < b.size(); j++) {
            if (a[i] == b[j]) { 
                int k;
                for (k = 0; k < res.size(); k++) 
                    if (res[k] == a[i]) 
                        break;
                if (k == res.size()) {
                    res.push_back(a[i]);
                }
            }
        }
    }

    return res;
}
int main(){
    vector<int> a = {1, 2, 3, 2, 1};
    vector<int> b = {3, 2, 2, 3, 3, 2};
    //vector<int> res = findArrayIntersectiion(a,a.size(),b,b.size());
     vector<int> res = intersection(a,b);
    for(int i = 0; i< res.size(); i++){
        cout<< res[i]<< " ";
    }
    return 0;
}