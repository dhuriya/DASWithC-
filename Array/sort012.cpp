#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {0, 1, 2, 0, 1, 2};
    int n = arr.size();
    int i = 0, j = 1, k = n-1;
    while(i<k){
        if(arr[i]==0 && arr[j]==1){
            i++;
            j++;
        }else if(arr[k]==2){
            k--;
        }
    }
    return 0;
}