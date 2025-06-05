//Selection Sort is a comparison-based sorting algorithm. It sorts an array by repeatedly selecting the smallest (or largest) element from the unsorted portion and swapping it with the first unsorted element. This process continues until the entire array is sorted.
//First we find the smallest element and swap it with the first element. This way we get the smallest element at its correct position.
//Then we find the smallest among remaining elements (or second smallest) and swap it with the second element.
//We keep doing this until we get all elements moved to correct position

#include<bits/stdc++.h>
using namespace std;
void selectioinSort(vector<int> &arr){
    int n =arr.size();
    for(int i = 0; i<n-1;i++){
        int min_idx = i;
        for(int j = i+1;j<n;j++){
            if(arr[j]<arr[min_idx]){
                min_idx = j;
            }
        }
        swap(arr[i],arr[min_idx]);
    }
}
void printArray(vector<int> &arr){
    for(int &val:arr){
        cout<< val<< " ";
    }
    cout<<endl;
}
int main(){
    vector<int> arr = {64,25,12,22,11};
    cout<<"Original Array :";
    printArray(arr);
    selectioinSort(arr);
    cout<<"Sorted Array :";
    printArray(arr);
    return 0;
}