#include<bits/stdc++.h>
using namespace std;
void sort01(vector<int> &arr){
    int i=0;
    int j = arr.size()-1;
    while(i<j){
       while (arr[i]==0 && i<j)
       {
            i++;
       }
       while(arr[j]==1 && i<j){
        j--;
       }
       if(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
       }
       
    }
}
void printArray(vector<int> &arr){
    for(int i =0;i<arr.size();i++){
        cout<< arr[i]<< " ";
    }
}
int main(){
    vector<int> arr = {0, 0, 1, 1, 0};
    printArray(arr);
    cout<<endl;
    sort01(arr);
    printArray(arr);
    return 0;
}